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
#define StringEnemy 7

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
};
typedef struct EnemyInfo EnemyInfo;

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
			player->_hp = 200;
			player->_damage = 20;
			player->_defence = 5;
			printf("당신이 선택한 총기는 M4입니다\n");
			return;
		case AK47_Owner:
			player->_hp = 200;
			player->_damage = 30;
			player->_defence = 5;
			printf("당신이 선택한 총기는 AK47입니다\n");
			return;
		case Kar98_Owner:
			player->_hp = 100;
			player->_damage = 50;
			player->_defence = 0;
			printf("당신이 선택한 총기는 Kar98입니다\n");
			return;
		case Scar_Owner:
			player->_hp = 200;
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
			// TODO 
			// CreateEnemy();
			// BattleStart();
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