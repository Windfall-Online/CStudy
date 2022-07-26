#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 오늘할거는 realloc, calloc, struct(구조체)


// 문제1. 원하는만큼 동적할당으로 배열 생성해서
// 숫자를 아무거나 쭉 채워넣기!



int main()
{
	int size;
	scanf("%d", &size);

	// 동적할당!
	// 포인터 변수를 하나 선언한다

	int* ptrArray = (int*)malloc(sizeof(int) * size);
	// malloc의 리턴형태는 void라서 좋게말하면 자유자재다 인데
	// 나쁘게 말하면 제대로된게 하나도없다 무조건 타입을 변경해줘야함

	for (int i = 0; i < size; ++i)
	{
		ptrArray[i] = i;
	}

	// 노파심에 거는 안전장치인데
	// 혹시나 우연이겹쳐서 이상한데서 에러나는걸 방지
	// 포인터변수 ptrArray의 값을 바꿀건데?
	// ptrArray가 존재하면 해라
	
	// realloc
	// malloc = memory + allocation

	// re + alloc
	// re = 다시!!
	// 메모리를 다시 할당한다?
	// 질문1. 메모리를 다시 할당해야할 경우는 어떤게있을까?
	// 덮어씌울때?
	// 전체 크기가 바뀌었을때?
	// 어? 그냥 뒤에 갖다붙이지 왜 할당을 다시함?
	// 배열의 특성과 관련이있음
	// CS문제
	// STL Container (vector 동적배열)
	// 배열의 특성이 뭘까?
	// 애초에 배열이란 뭔가?
	// 특정 자료형을 메모리에 "연속"으로 배치
	// 호텔에 예약을했음
	// 4명이1인1방
	// 101호터 104호까지 예약을함
	// 근데 친구가 3명더 여행에 햡류를 하고싶다
	// 같은호텔로 오겠다
	// 근데 우린 ㅈㄴ 친한친구라 무조건 방을 옆에 붙여야한다
	// 근데 105부터는 다른사람이 쓰고있음
	// 친구 7명이 전체가 2층으로 아니면 3층올 즉 7개의 방이 연속을 붙을 수 있는 곳으로 가서
	// 잘 예정
	
	int moreSize;
	scanf("%d", &moreSize);
	ptrArray = (int*)realloc(ptrArray, sizeof(int) * (size + moreSize));
	
	for (int i = 0; i < size + moreSize; ++i)
	{
		ptrArray[i] = i;
	}
	for (int i = 0; i < size + moreSize; ++i)
	{
		printf("%d ", ptrArray[i]);
	}
	
	// calloc
	// c + alloc
	// 동적할당할 때 초기화를 같이 해준다
	int* secondPtr = (int*)calloc(0, sizeof(int) * 100);
	
	// 동적할당 해서? 값을 입력받고
	// 꽉차면? 좀 더 공간을 할당받는 배열을 만들어라 (vector)
	
	// 벡터는 자료구조 이름
	// 근데 일반 배열처럼 한도가 정해져있지않음
	
	
	
	

}






