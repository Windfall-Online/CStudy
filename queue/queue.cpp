#include <stdio.h>
#include <queue>
#include <iostream>
#include <stdbool.h>
using namespace std;

// 한쪽방향에서 넣고빼고 push, pop = stack
// 뒤에서 넣고 앞에서 뺌
// push, pop

int queueArray[10];
int front;
int back;
int _size;

bool empty()
{
	return front == back;
}

void push(int value)
{
	queueArray[back] = value;
	back++;
	_size++;
}

void pop()
{
	if (!empty())
	{
		queueArray[front] = 0;
		front++;
		_size--;
	}
}

int Front()
{
	return queueArray[front];
}

int main()
{
	for (int i = 1; i <= 5; ++i)
	{
		push(i);
	}
	printf("큐에 들어있는 값 : ");
	for (int i = 0; i < 10; ++i)
	{
		if (queueArray[i] != 0)
			printf("%d ", queueArray[i]);
	}
	printf("\n");
	int topValue = Front();
	printf("맨 앞에 있는 값 : %d\n", topValue);
	pop();
	pop();
	topValue = Front();
	printf("pop() 2번수행후 맨 앞에 있는 값 : %d\n", topValue);
	printf("pop() 2번수행후 큐 안에 있는 값 : ");
	for (int i = 0; i < 10; ++i)
	{
		if (queueArray[i] != 0)
			printf("%d ", queueArray[i]);
	}


}

