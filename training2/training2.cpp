// 문제
// 학생의 정보를 저장하는 구조체 변수를 만들어 주세요
// 학생은 학번, 이름, 연락처, 집 주소를 가집니다
// 원하는 만큼 구조체 변수를 동적으로 할당하고
// Input()함수에서는 학생의 정보를 입력받고
// Output()함수에서는 학생의 정보를 출력하고
// Edit()함수에서는 학생의 정보를 수정합니다
// 1번을 입력하면 Input()
// 2번을 입력하면 Output()
// 3번을 입력하면 Edit() 
// 함수가 실행되게 해주세요!!
// 그외의 번호를 입력하면 빠꾸
// Output함수로 출력을 할 때는 학생의 번호도 출력을 해주세요
// 번호는 1번부터 시작합니다

// 특정 기능에 대해서 함수()로 래핑하는 습관을 들여야한다
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
// 144바이트
typedef struct StudentInfo StudentInfo;

void Input(StudentInfo* info, int count)
{
	printf("===================학생정보 입력===================\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d 번 학생의 학번 : ", i + 1);
		scanf(" %d", &info[i]._idNumber);
		printf("%d 번 학생의 이름 : ", i + 1);
		scanf(" %s", info[i]._name);
		printf("%d 번 학생의 연락처 : ", i + 1);
		scanf(" %s", info[i]._contact);
		printf("%d 번 학생의 주소 : ", i + 1);
		scanf(" %[^\n]s", info[i]._address);
	}
}

void Output(StudentInfo* info, int count)
{
	printf("===================학생정보 출력===================\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d 번 학생의 학번 : %d\n", i + 1, info[i]._idNumber);
		printf("%d 번 학생의 이름 : %s\n", i + 1, info[i]._name);
		printf("%d 번 학생의 연락처 : %s\n", i + 1, info[i]._contact);
		printf("%d 번 학생의 주소 : %s\n", i + 1, info[i]._address);
		printf("\n");
	}
}

void Edit(StudentInfo* info)
{
	printf("===================학생정보 수정===================\n");
	int number;
	printf("수정할 학생의 번호 : ");
	scanf(" %d", &number);
	printf("학번 : ");
	scanf(" %d", &info[number - 1]._idNumber);
	printf("이름 : ");
	scanf(" %s", info[number - 1]._name);
	printf("연락처 : ");
	scanf(" %s", info[number - 1]._contact);
	printf("주소 : ");
	scanf(" %[^\n]s", info[number - 1]._address);
}

int main()
{
	// 학생 수
	int count;
	int select;

	printf("학생 수 입력 : ");
	scanf("%d", &count);

	// 자료형이라는 것 자체가? 힌트다 안에 뭐가있나?
	StudentInfo* info = (StudentInfo*)malloc(sizeof(StudentInfo) * count);
	while (true)
	{
		printf("1. 학생정보 입력\n2. 학생정보 출력\n3. 학생정보 수정\n4. 종료\n");
		printf("메뉴 선택 : ");
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
			printf("잘 못 입력함");
			break;
		}
	}
}

