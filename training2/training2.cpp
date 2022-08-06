// ����
// �л��� ������ �����ϴ� ����ü ������ ����� �ּ���
// �л��� �й�, �̸�, ����ó, �� �ּҸ� �����ϴ�
// ���ϴ� ��ŭ ����ü ������ �������� �Ҵ��ϰ�
// Input()�Լ������� �л��� ������ �Է¹ް�
// Output()�Լ������� �л��� ������ ����ϰ�
// Edit()�Լ������� �л��� ������ �����մϴ�
// 1���� �Է��ϸ� Input()
// 2���� �Է��ϸ� Output()
// 3���� �Է��ϸ� Edit() 
// �Լ��� ����ǰ� ���ּ���!!
// �׿��� ��ȣ�� �Է��ϸ� ����
// Output�Լ��� ����� �� ���� �л��� ��ȣ�� ����� ���ּ���
// ��ȣ�� 1������ �����մϴ�

// Ư�� ��ɿ� ���ؼ� �Լ�()�� �����ϴ� ������ �鿩���Ѵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct StudentInfo
{
	int _idNumber;
	char _name[20];
	char _contact[20];
	char _address[100];
};
// 144����Ʈ
typedef struct StudentInfo StudentInfo;

void Input(StudentInfo* info, int count)
{
	printf("===================�л����� �Է�===================\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d �� �л��� �й� : ", i + 1);
		scanf(" %d", &info[i]._idNumber);
		printf("%d �� �л��� �̸� : ", i + 1);
		scanf(" %s", info[i]._name);
		printf("%d �� �л��� ����ó : ", i + 1);
		scanf(" %s", info[i]._contact);
		printf("%d �� �л��� �ּ� : ", i + 1);
		scanf(" %[^\n]s", info[i]._address);
	}
}

void Output(StudentInfo* info, int count)
{
	printf("===================�л����� ���===================\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d �� �л��� �й� : %d\n", i + 1, info[i]._idNumber);
		printf("%d �� �л��� �̸� : %s\n", i + 1, info[i]._name);
		printf("%d �� �л��� ����ó : %s\n", i + 1, info[i]._contact);
		printf("%d �� �л��� �ּ� : %s\n", i + 1, info[i]._address);
		printf("\n");
	}
}

void Edit(StudentInfo* info)
{
	printf("===================�л����� ����===================\n");
	int number;
	printf("������ �л��� ��ȣ : ");
	scanf(" %d", &number);
	printf("�й� : ");
	scanf(" %d", &info[number - 1]._idNumber);
	printf("�̸� : ");
	scanf(" %s", info[number - 1]._name);
	printf("����ó : ");
	scanf(" %s", info[number - 1]._contact);
	printf("�ּ� : ");
	scanf(" %[^\n]s", info[number - 1]._address);
}

int main()
{
	// �л� ��
	int count;
	int select;

	printf("�л� �� �Է� : ");
	scanf("%d", &count);

	// �ڷ����̶�� �� ��ü��? ��Ʈ�� �ȿ� �����ֳ�?
	StudentInfo* info = (StudentInfo*)malloc(sizeof(StudentInfo) * count);
	while (true)
	{
		printf("1. �л����� �Է�\n2. �л����� ���\n3. �л����� ����\n4. ����\n");
		printf("�޴� ���� : ");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Input(info, count);
			break;
		case 2:
			Output(info, count);
			break;
		case 3:
			Edit(info);
			break;
		case 4:
			exit(0);
		default:
			printf("�� �� �Է���");
			break;
		}
	}
}

