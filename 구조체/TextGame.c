#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Player 타입
#define M4_Owner 1
#define AK47_Owner 2
#define Kar98_Owner 3
#define Scar_Owner 4

// Monster 타입
#define EasyEnemy 5
#define NormalEnemy 6
#define StrongEnemy 7

// Player 스탯
struct PlayerInfo
{
	int _hp;
	int _damage;
	int _defence;

};
typedef struct PlayerInfo PlayerInfo;

// 적군 스탯
struct EnemyInfo
{
	int _hp;
	int _damage;
	int _defence;
	int _type;
};
typedef struct EnemyInfo EnemyInfo;

void BattleStart(PlayerInfo* player, EnemyInfo* enemy);

void CreatePlayer(PlayerInfo* player)
{
	int selectPlayer;
	while (1)
	{
		printf("1. M4\n2. AK-47\n3. Kar98\n4. Scar\n");
		printf("플레이어를 선택해주세요 : ");
		scanf("%d", &selectPlayer);
		switch (selectPlayer)
		{
		case M4_Owner:
			player->_hp = 500;
			player->_damage = 20;
			player->_defence = 5;
			printf("당신이 선택한 총기는 M4입니다\n");
			return;
		case AK47_Owner:
			player->_hp = 500;
			player->_damage = 30;
			player->_defence = 5;
			printf("당신이 선택한 총기는 AK47입니다\n");
			return;
		case Kar98_Owner:
			player->_hp = 500;
			player->_damage = 50;
			player->_defence = 0;
			printf("당신이 선택한 총기는 Kar98입니다\n");
			return;
		case Scar_Owner:
			player->_hp = 500;
			player->_damage = 15;
			player->_defence = 10;
			printf("당신이 선택한 총기는 Scar입니다\n");
			return;
		default:
			printf("\n플레이어를 잘못 선택하셨습니다 다시 선택해주세요!\n\n");
			break;
		}

	}
}

void CreateEnemy(PlayerInfo* player)
{
	EnemyInfo* enemy = (EnemyInfo*)malloc(sizeof(EnemyInfo));
	enemy->_type = (rand() % 3) + 5; // (0, 1, 2) + 5

	switch (enemy->_type)
	{
	case EasyEnemy:
		enemy->_hp = 200;
		enemy->_defence = 1;
		enemy->_damage = 20;
		break;
	case NormalEnemy:
		enemy->_hp = 300;
		enemy->_defence = 5;
		enemy->_damage = 50;
		break;
	case StrongEnemy:
		enemy->_hp = 1000;
		enemy->_defence = 10;
		enemy->_damage = 80;
		break;
	}

	BattleStart(player, enemy);
}

void BattleStart(PlayerInfo* player, EnemyInfo* enemy)
{
	while (1)
	{
		printf("\n\n");
		printf("나의 현재 체력 : %d\n", player->_hp);
		printf("적의 현재 체력 : %d\n", enemy->_hp);
		// 먼저 공격!!
		int damage = player->_damage - enemy->_defence;
		// 내 공격력이 10이고 상대 방어력이 5면 원래 10들어갈거 5가 까이고 들어감
		int ShitAim = rand() % 2;
		if (ShitAim == 1)
		{
			printf("으악 에임이 구렸다!\n");
			printf("적의 현재 체력 : %d\n", enemy->_hp);
		}
		else
		{
			int bug = rand() % 100;
			if (bug == 1)
			{
				printf("fucking galaxy\n");
				exit(1);
			}
			if (damage < 0)
			{
				damage = 0;
			}
			printf("나의 공격 시작!\n");
			printf("적에게 준 데미지 : %d\n", damage);
			enemy->_hp -= damage;

			if (enemy->_hp < 0)
			{
				enemy->_hp = 0;
			}
			printf("enemy의 남은 체력 : %d\n", enemy->_hp);
			if (enemy->_hp == 0)
			{
				printf("enemy를 처치했습니다!! 축하합니다!!\n");
				return;
			}
		}

		// 안죽었으면 내가 맞을 차례다
		damage = enemy->_damage - player->_defence;
		if (damage < 0)
		{
			damage = 0;
		}
		int ShitAim2 = rand() % 2;
	
		if (ShitAim2 == 1)
		{
			printf("적군의 공격이 빗나갔다!\n");
			printf("나의 현재 체력 : %d\n", player->_hp);
		}
		else
		{
			printf("적의 공격 시작!\n");
			printf("내가 받은 데미지 : %d\n", damage);
			player->_hp -= damage;

			if (player->_hp < 0)
			{
				player->_hp = 0;
			}
			printf("player의 남은 체력 : %d\n", player->_hp);
			if (player->_hp == 0)
			{
				printf("You Died\n");
				return;
			}
			printf("턴 종료\n\n");
		}
	
	}
}

void EnterBattleArea(PlayerInfo* player)
{
	while (1)
	{

		printf("===================\n");
		printf("전장에 진입했습니다!\n");
		printf("===================\n\n");

		printf("===================\n");
		printf("1. 전투 참여 2. 도주\n");
		printf("===================\n\n");
		int select;
		scanf("%d", &select);
		if (select == 1)
		{
			CreateEnemy(player);
			if (player->_hp == 0)
			{
				return;
			}
			else
			{
				return;
			}
		}
		else
		{
			printf("전장에서 이탈했습니다!!\n");
			return;
		}

	}
}

int main()
{
	srand((unsigned int)time(NULL));
	PlayerInfo* player = (PlayerInfo*)malloc(sizeof(PlayerInfo));
	CreatePlayer(player);
	EnterBattleArea(player);
}

// 포인터 변수 크기
// 32bit - 4byte
// 64bit - 8byte