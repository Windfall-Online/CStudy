#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Player Ÿ��
#define M4_Owner 1
#define AK47_Owner 2
#define Kar98_Owner 3
#define Scar_Owner 4

// Monster Ÿ��
#define EasyEnemy 5
#define NormalEnemy 6
#define StrongEnemy 7

// Player ����
struct PlayerInfo
{
	int _hp;
	int _damage;
	int _defence;

};
typedef struct PlayerInfo PlayerInfo;

// ���� ����
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
		printf("�÷��̾ �������ּ��� : ");
		scanf("%d", &selectPlayer);
		switch (selectPlayer)
		{
		case M4_Owner:
			player->_hp = 500;
			player->_damage = 20;
			player->_defence = 5;
			printf("����� ������ �ѱ�� M4�Դϴ�\n");
			return;
		case AK47_Owner:
			player->_hp = 500;
			player->_damage = 30;
			player->_defence = 5;
			printf("����� ������ �ѱ�� AK47�Դϴ�\n");
			return;
		case Kar98_Owner:
			player->_hp = 500;
			player->_damage = 50;
			player->_defence = 0;
			printf("����� ������ �ѱ�� Kar98�Դϴ�\n");
			return;
		case Scar_Owner:
			player->_hp = 500;
			player->_damage = 15;
			player->_defence = 10;
			printf("����� ������ �ѱ�� Scar�Դϴ�\n");
			return;
		default:
			printf("\n�÷��̾ �߸� �����ϼ̽��ϴ� �ٽ� �������ּ���!\n\n");
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
		printf("���� ���� ü�� : %d\n", player->_hp);
		printf("���� ���� ü�� : %d\n", enemy->_hp);
		// ���� ����!!
		int damage = player->_damage - enemy->_defence;
		// �� ���ݷ��� 10�̰� ��� ������ 5�� ���� 10���� 5�� ���̰� ��
		int ShitAim = rand() % 2;
		if (ShitAim == 1)
		{
			printf("���� ������ ���ȴ�!\n");
			printf("���� ���� ü�� : %d\n", enemy->_hp);
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
			printf("���� ���� ����!\n");
			printf("������ �� ������ : %d\n", damage);
			enemy->_hp -= damage;

			if (enemy->_hp < 0)
			{
				enemy->_hp = 0;
			}
			printf("enemy�� ���� ü�� : %d\n", enemy->_hp);
			if (enemy->_hp == 0)
			{
				printf("enemy�� óġ�߽��ϴ�!! �����մϴ�!!\n");
				return;
			}
		}

		// ���׾����� ���� ���� ���ʴ�
		damage = enemy->_damage - player->_defence;
		if (damage < 0)
		{
			damage = 0;
		}
		int ShitAim2 = rand() % 2;
	
		if (ShitAim2 == 1)
		{
			printf("������ ������ ��������!\n");
			printf("���� ���� ü�� : %d\n", player->_hp);
		}
		else
		{
			printf("���� ���� ����!\n");
			printf("���� ���� ������ : %d\n", damage);
			player->_hp -= damage;

			if (player->_hp < 0)
			{
				player->_hp = 0;
			}
			printf("player�� ���� ü�� : %d\n", player->_hp);
			if (player->_hp == 0)
			{
				printf("You Died\n");
				return;
			}
			printf("�� ����\n\n");
		}
	
	}
}

void EnterBattleArea(PlayerInfo* player)
{
	while (1)
	{

		printf("===================\n");
		printf("���忡 �����߽��ϴ�!\n");
		printf("===================\n\n");

		printf("===================\n");
		printf("1. ���� ���� 2. ����\n");
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
			printf("���忡�� ��Ż�߽��ϴ�!!\n");
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

// ������ ���� ũ��
// 32bit - 4byte
// 64bit - 8byte