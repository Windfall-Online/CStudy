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
#define StringEnemy 7

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
};
typedef struct EnemyInfo EnemyInfo;

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
			player->_hp = 200;
			player->_damage = 20;
			player->_defence = 5;
			printf("����� ������ �ѱ�� M4�Դϴ�\n");
			return;
		case AK47_Owner:
			player->_hp = 200;
			player->_damage = 30;
			player->_defence = 5;
			printf("����� ������ �ѱ�� AK47�Դϴ�\n");
			return;
		case Kar98_Owner:
			player->_hp = 100;
			player->_damage = 50;
			player->_defence = 0;
			printf("����� ������ �ѱ�� Kar98�Դϴ�\n");
			return;
		case Scar_Owner:
			player->_hp = 200;
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
			// TODO 
			// CreateEnemy();
			// BattleStart();
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