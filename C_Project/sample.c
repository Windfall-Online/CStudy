#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 도서관 관리
// 1. 대여
// 2. 반납
// 3. 검색
// 4. 책 추가
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
	// 꽉차면 추가
	// 책을 검색한다던가?
	for (;;)
	{
		if (manageLibrary.bookArray->_genre == 소설)
		{
			printf 출력
		}
	}
	islended = true;
}