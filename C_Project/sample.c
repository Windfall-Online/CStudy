#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// ������ ����
// 1. �뿩
// 2. �ݳ�
// 3. �˻�
// 4. å �߰�
// 

struct BookInfo
{
	int _id;
	char* _name;
	int _genre;
	bool _islended;
};
typedef struct BookInfo BookInfo;

struct Library
{
	BookInfo* bookArray;
	int _size;
};
typedef struct Library Library;

int main()
{
	Library manageLibrary;
	manageLibrary.bookArray = (BookInfo*)malloc(sizeof(BookInfo) * 10);
	// ������ �߰�
	// å�� �˻��Ѵٴ���?
	for (;;)
	{
		if (manageLibrary.bookArray->_genre == �Ҽ�)
		{
			printf ���
		}
	}
	islended = true;
}