#include<stdio.h>
#include<stdlib.h>
#define �Ҽ� 1 
#define ��ȭå 2
#define ���� 3

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
		printf("1.�Ҽ� 2.��ȭå 3.���� \n\n");
		printf("å �帣(��ȣ)�� �������ּ��� : ");
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
			customer->price = 15000;
			customer->title = "���̾� ��ȭ���� ����";
			customer->genre = 1;
			printf("�帣 : %d / ���� : %s / ���� : %d", customer->genre, customer->title, customer->price);
			return;
		case 2:
			customer->price = 10000;
			customer->title = "������ �����";
			customer->genre = 2;
			printf("�帣 : %d / ���� : %s / ���� : %d", customer->genre, customer->title, customer->price);
			return;
		case 3:
			customer->price = 9000;
			customer->title = "���� ���� �ʸ� ����";
			customer->genre = 3;
			printf("�帣 : %d / ���� : %s / ���� : %d", customer->genre, customer->title, customer->price);
			return;
		default :
			printf("�帣�� �ٽ� ������ �ּ���!\n");
			break;
		}
	}
}

int main(void)
{
	productInfo* customer = (productInfo*)malloc(sizeof(productInfo));
	choose(customer);
}