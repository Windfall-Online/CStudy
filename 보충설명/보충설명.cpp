#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // 1. 포인터 방식으로 배열 표현하기
    // 왜 배열이름이 배열 주소인지?
    // 배열생성
    char tempArr[5] = { 0, };
    
    &tempArr[0];
    //&*(tempArr + 0); 
    
    // + 0 제거 
    // *& 같이없어지고
    // tempArr;

    // 결론
    tempArr[0] = 'a';
    // == *(tempArr + 0) = 'a';
    
    // 2. 포인터 배열 만들기
    // 1번의 배열은 문자 배열
    
    int tempA = 1;
    int tempB = 2;
    int* aPtr = &tempA;
    int* bPtr = &tempB;
    
    int* ptrArray[2] = { &tempA, bPtr };

    // 배열 포인터
    // 배열의 종류가 너무많음
    // 그래서 모든 배열을 다담는 만능 배열 포인터는 없고
    // 시그니처가 맞아야한다

    // 배열 포인터를 만드는 방법
    // int 포인터
    // 배열 포인터는 배열을 가리키는 포인터임
    // 나는 int형이고 원소의 개수가 2개인 배열을 가리키는 포인터를 만들겠다!
    // 자료형 (*포인터이름) [원소개수]
    int(*arrPtr)[2];
    
    // *도 연산자고 []도 연산자다
    // 연산자가 2개이상이 있으면 우선순위가 생기게 됨
    // 그러나 초등학교때부터 내려온 유구한 전통 ()부터 계산한다가 적용이 돼서
    // (*arrPtr)이 우선권을 가져가서 포인터 선언이 되는거고
    // 나머지가 int[2]가 자료형을 담당함
    // 즉 int[2] *arrPtr의 모양새가 되는거임 
    // 자료형이 int가아니라 int[2] *arrPtr

    int tpArr[2];  // 1
    int tpArr2[2]; // 2
    int tpArr3[5]; // 3
    char tpArr4[2]; // 4
    
    char* tpPtr = tpArr4;
    
    arrPtr = &tpArr;


    // 포인터 배열
    // 숫자 배열
    int abcArr[10] = { 0, };
    
    int z = 10;
    int* zPtr = &z;

    int* abcPtr[3] = { zPtr, &z};

    // 뭘 선언할 때
    // 변수?
    // 선언에 연산자가 2개이상이면 우선순위를 따지고
    // 가장빠른게 선언의 형태가 됨

    {

        int(*ptr)[2];
        
    }

    {
        int a = 10;
        int* b = &a;

        char ab[10] = { 'a', };
        //char* b = ab;

        int(*ptr)[2];
        // int[2];
        int bbbb[2] = { 0, 1 };
        ptr = &bbbb;
    }

}

