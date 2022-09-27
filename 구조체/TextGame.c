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

// 배그말고 한 게임


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
	printf("플레이어가 생성되었습니다!!\n");
	player->_hp = 300;
	player->_damage = 20;
	player->_defence = 10;
}
void CreateEnemy(EnemyInfo* Enemy)
{
	printf("적군이 생성되었습니다!!\n");
	Enemy->_hp = 200;
	Enemy->_damage = 10;
	Enemy->_defence = 5;
}

void PrintPlayerInfo(PlayerInfo* player)
{
	printf("\n\n============플레이어 정보============\n");
	printf("플레이어의 체력 : %d\n", player->_hp);
	printf("플레이어의 공격력 : %d\n", player->_damage);
	printf("플레이어의 방어력 : %d\n", player->_defence);
}
void PrintEnemyInfo(EnemyInfo* enemy)
{
	printf("\n\n============적군 정보============\n");
	printf("적군의 체력: %d\n", enemy->_hp);
	printf("적군의 공격력 : %d\n", enemy->_damage);
	printf("적군의 방어력 : %d\n", enemy->_defence);
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