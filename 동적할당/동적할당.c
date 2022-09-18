#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 동적 할당(Dynamic Allocation)
// 정적 할당과 동적 할당의 차이


// 정적 = 컴파일 시점에 결정
// 동적 = 런타임 시점에 결정

// printf("Hello World"); -> 0110101010100101010101100 
// 기계어로 바뀌었음

// 런타임 exe파일을 실행할 때

int main()
{
    
    // 배열의 크기를 내가 결정하고 싶다 
    // 어떻게? scanf로 값을 입력받아서

    //int arraySize;
    //scanf("%d", &arraySize);
    //int tempArray[arraySize];

    // 동적할당
    // Windows << 메모리를 이만큼 주세요
    // Windows >> 알았다 이만큼 줄게
    // 사용자가 달라고 시점을 정하고
    // 사용자가 다시 돌려줄게 시점을 정함
    // 한번 줄 때 좀 크게
    // 배그? 할때 얘가 메모리를 5기가만달라 
    // 1기가만 더 달라
    // 1기가만 더 달라
    // 줄 때 좀 크게줌

    // 그래서 어떻게 쓰느냐?
    // 스택이 아니면 어디에 생성하냐?
    // Heap 맞음
    // 자 스택이 아니죠

    // 저 멀리있는걸 가르켜야 한다
    // 저 멀리있는 주소를 들고있어야함
    // 무언가의 주소를 담아야함
    // 포인터

    // 시그니처
    // 먼저 stdlib.h
    // malloc() 멀록
    // memory allocation
    
    
    // 변수 a를 동적할당 해보자


    void* a = malloc(sizeof(int));
    // 왜 보이드?
    // 아무것도 안가르키는건가?
    // NONO
    // 형식이 정해지지 않았다
    // 니가 알아서 바꿔써라

    int* b = (int*)a;
    free(a);

    // 아 난 보이드가뭔지 모르겠음 헷갈림

    int* anotherA = (int*)malloc(sizeof(int));
    free(anotherA);
    
    // 메모리를 빌렸으면 반납을 해야한다
    // 갖고튀면 셧다운
    // memory leaking 혹은 메모리 누수
    // 이걸 조심해야 한다
    // C, C++이 좋은점 동적할당이 가능하다
    // 생명주기를 내가 결정한다!!
    // C#, java = garbage collection

    
    {

        int arraySize = NULL;
        scanf("%d", &arraySize);
        // TODO : 
        int* tempArray = (int*)malloc(sizeof(int) * arraySize);

    }

    {


        // 문제1.
        // int형 배열을 동적할당하고
        // 직접 숫자를 하나하나 입력해서 넣고
        // 출력해보세요!

        // 문제2.
        // char형 배열을 동적할당하고
        // 문자를 한번에 입력받고
        // 출력하기!

        char a = 'b';
        char sampletext[10];
        char* tempMemory = (char*)malloc(sizeof(char) * 10);
        
        //어떤주소를주면 \0이게 나올때까지 출력한다
        //입력 받을 때도 니가 엔터칠때까지 입력받겠다 공간이 허락하는 한도내에서
        //100 101 102 103 104 105 106 107(엔터를 친 흔적이있네?)

        {

            char tempArray[10] = { 'a',};
            scanf("%s", tempArray);
            printf("%s", tempArray);

        }

    }
   
}

