#include <stdio.h>
#include <queue>
#include <iostream>
#include <stdbool.h>
using namespace std;

// ���ʹ��⿡�� �ְ��� push, pop = stack
// �ڿ��� �ְ� �տ��� ��
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
	printf("ť�� ����ִ� �� : ");
	for (int i = 0; i < 10; ++i)
	{
		if (queueArray[i] != 0)
			printf("%d ", queueArray[i]);
	}
	printf("\n");
	int topValue = Front();
	printf("�� �տ� �ִ� �� : %d\n", topValue);
	pop();
	pop();
	topValue = Front();
	printf("pop() 2�������� �� �տ� �ִ� �� : %d\n", topValue);
	printf("pop() 2�������� ť �ȿ� �ִ� �� : ");
	for (int i = 0; i < 10; ++i)
	{
		if (queueArray[i] != 0)
			printf("%d ", queueArray[i]);
	}


}

