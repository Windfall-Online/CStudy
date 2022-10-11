#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int numArray[1005];
int main()
{
	// 숫자를 몇개 칠거냐?
	int temp = 0;
	int minIndex = 0;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &numArray[i]);
	}
	for (int i = 0; i < N; ++i)
	{
		minIndex = i;
		for (int j = i + 1; j < N; ++j)
		{
			if (numArray[j] < numArray[minIndex])
			{
				minIndex = j;
				// minIndex = 3
				// j = 4
			}
		}
		temp = numArray[minIndex];
		numArray[minIndex] = numArray[i];
		numArray[i] = temp;
	}
	
	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", numArray[i]);
	}
	// 0 1 2 3 4
	// 5 4 3 2 1
	
}