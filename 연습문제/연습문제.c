// 스택 자료구조에 대해서는 
// [1][2][3][4][5] <- 이쪽으로만 들어감 출입구가 하나
// LIFO(Last in first out)


// push()함수 스택에 값을 넣는다
// pop()함수 스택의 값을 1개 뺀다
// top()함수 스택의 맨 위에있는 값을 리턴한다
// size()함수 스택의 사이즈가 몇인지 리턴한다
// isEmpty() 스택이 비었는지 확인한다 비어있으면 참 아니면 거짓

// 여기서 스택의 크기는 동적할당으로 사용자가 직접 정한다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// stack size
int _size;
int currentIndex;
void push(int* _stack, int stackSize, int value)
{
	if (_size < stackSize)
	{
		
		// _size하나로 통합 가능
		_stack[currentIndex] = value;
		currentIndex++;
		_size++;
	}
	else
	{
		printf("스택이 꽉 찼습니다!!\n");
	}
}
// 스택
// currentIndex 어디에 값을 넣을지 지정해주는 
// [value]-[   ]
//    0      1
void pop(int* _stack)
{
	if (_size > 0)
	{
		_stack[--currentIndex] = 0;
		_size--;
	}
	
	else
	{
		printf("스택이 비어있습니다!\n");
	}
	
}

int top(int* _stack)
{
	
	return _stack[_size - 1];
	
}

int size()
{
	return _size;
}

bool isEmpty()
{
	return !_size;
}

int main()
{
	
	int stackSize = NULL;
	
	printf("스택의 크기를 입력해주세요 : ");
	scanf("%d", &stackSize);

	// 스택 생성
	// 정적으로 선언했으면? int _stack[20]; 
	int* _stack = (int*)malloc(sizeof(int) * stackSize);
	for (int i = 0; i < 5; ++i)
	{
		push(_stack, stackSize, i);
	}
	printf("==================스택 출력===============\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", _stack[i]);
	}
	printf("==================스택 출력끝===============\n");
	printf("==================pop() 2번===============\n");
	pop(_stack);
	pop(_stack);
	printf("==================스택 출력===============\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", _stack[i]);
	}
	printf("==================스택 출력끝===============\n");
	printf("%d\n", top(_stack));
	printf("%d\n", isEmpty(_stack)); vc         
	


}

