#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct M4_Owner
{

	int _hp;
	int _damage;
	int _defence;
};
typedef struct M4_Owner M4_Owner;

struct AK47_Owner
{

	int _hp;
	int _damage;
	int _defence;
};
typedef struct AK47_Owner AK47_Owner;

struct Kar98_Owner
{

	int _hp;
	int _damage;
	int _defence;
};
typedef struct Kar98_Owner Kar98_Owner;

struct Scar_Owner
{

	int _hp;
	int _damage;
	int _defence;
};
typedef struct Scar_Owner Scar_Owner;

// ��׸��� �� ����


struct PlayerInfo
{
	int _hp;
	int _damage;
	int _defence;

};
typedef struct PlayerInfo PlayerInfo;

struct EnemyInfo
{
	int _hp;
	int _damage;
	int _defence;
};
typedef struct EnemyInfo EnemyInfo;

void CreatePlayer(PlayerInfo* player)
{
	printf("�÷��̾ �����Ǿ����ϴ�!!\n");
	player->_hp = 300;
	player->_damage = 20;
	player->_defence = 10;
}
void CreateEnemy(EnemyInfo* Enemy)
{
	printf("������ �����Ǿ����ϴ�!!\n");
	Enemy->_hp = 200;
	Enemy->_damage = 10;
	Enemy->_defence = 5;
}

void PrintPlayerInfo(PlayerInfo* player)
{
	printf("\n\n============�÷��̾� ����============\n");
	printf("�÷��̾��� ü�� : %d\n", player->_hp);
	printf("�÷��̾��� ���ݷ� : %d\n", player->_damage);
	printf("�÷��̾��� ���� : %d\n", player->_defence);
}
void PrintEnemyInfo(EnemyInfo* enemy)
{
	printf("\n\n============���� ����============\n");
	printf("������ ü��: %d\n", enemy->_hp);
	printf("������ ���ݷ� : %d\n", enemy->_damage);
	printf("������ ���� : %d\n", enemy->_defence);
}

int main()
{

	PlayerInfo* player = (PlayerInfo*)malloc(sizeof(PlayerInfo));
	CreatePlayer(player);
	EnemyInfo* enemy = (EnemyInfo*)malloc(sizeof(EnemyInfo));
	CreateEnemy(enemy);
	PrintPlayerInfo(player);
	PrintEnemyInfo(enemy);
	
	


}