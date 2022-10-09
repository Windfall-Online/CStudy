#include<stdio.h>
#include<stdlib.h>
#define 소설 1 
#define 동화책 2
#define 시집 3

struct productInfo
{
	int price;
	char title[200];
	int genre;
};
typedef struct productInfo productInfo;

void choose(productInfo* customer)
{
	int number;
	while (1)
	{
		printf("1.소설 2.동화책 3.시집 \n\n");
		printf("책 장르(번호)를 선택해주세요 : ");
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
			customer->price = 15000;
			customer->title = "나미야 잡화점의 기적";
			customer->genre = 1;
			printf("장르 : %d / 제목 : %s / 가격 : %d", customer->genre, customer->title, customer->price);
			return;
		case 2:
			customer->price = 10000;
			customer->title = "무지개 물고기";
			customer->genre = 2;
			printf("장르 : %d / 제목 : %s / 가격 : %d", customer->genre, customer->title, customer->price);
			return;
		case 3:
			customer->price = 9000;
			customer->title = "꽃을 보듯 너를 본다";
			customer->genre = 3;
			printf("장르 : %d / 제목 : %s / 가격 : %d", customer->genre, customer->title, customer->price);
			return;
		default :
			printf("장르르 다시 선택해 주세요!\n");
			break;
		}
	}
}

int main(void)
{
	productInfo* customer = (productInfo*)malloc(sizeof(productInfo));
	choose(customer);
}