#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

// 함수 포인터는?
// 함수를 담는 포인터
// 배열포인터랑 똑같음

// 리턴타입(*함수포인터이름)(매개변수)

// 배열 포인터 만들 때
// 자료형(*배열포인터이름)[개수]


// 2. 
typedef int(FUNC_TYPE)(int, int);
FUNC_TYPE* ft;

using FUNC_TYPE22 = double(double, double);

//NG

int Add(int value1, int value2)
{
    return 0;
}

void CallByValue(int value1, int value2)
{
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("값 교환\n");
    int temp;
    temp = value1;
    value1 = value2;
    value2 = temp;
    printf("value1 = %d, value2 = %d\n", value1, value2);
}

void CallByReference(int* value1, int* value2)
{
    printf("value1 = %d, value2 = %d\n", *value1, *value2);
    printf("값 교환\n");
    int temp;
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    printf("value1 = %d, value2 = %d\n", *value1, *value2);
}

int main()
{
  
    // Add()함수를 넣을 수 있는 함수 포인터를 만들어 보자!!
    // 1. int(*함수포인터이름)(int, int);    
    //Add(1, 2);
    //int a = 1;
    //int b = 2;
    // 힌트 : 원본을 바꿔야한다!
    // Swap(a, b);
    //printf("a = %d, b = %d", a, b);
    // 숙제 달팽이 배열

    // Call by value : 값에 의한 호출
    // Call by reference : 참조에 의한 호출 -> 주소를 가지고 원본을 건드린다

    int num1;
    int num2;
    printf("num1 : ");
    scanf("%d", &num1);
    printf("num2 : ");
    scanf("%d", &num2);

    printf("PrintAll()호출\n");
    CallByReference(&num1, &num2);
    printf("PrintAll()종료\n");
    printf("value1 = %d, value2 = %d\n", num1, num2);

    {
        int a = 10;
        int b = 0;
        b = a;
        b = b + 1;
        // b = 11
        // a = 10
        // 왜 a가 안늘어냐나!! 둘이 같은데
        // ?????? 둘이 다름
    }


}



