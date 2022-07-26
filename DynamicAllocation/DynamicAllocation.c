#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 동적 할당(dynamic allocation) : 운영체제에게 메모리를 이만큼 내놔라 하는 것
// 
// 정적 할당은 뭐냐? 이미 정해져 있는?

// 배그에서 태양은 일정한 각도로만 계속 빛을 발사함
// 그럼 여기서
// 정적 라이팅이 뭐냐?
// 시작과 동시에 이미 정해져있음 값들이

// 사람 -> 사람의 그림자가 계속 바뀜
// 이걸 동적 라이팅
// 뭔가 계속 바뀜 
// 월드 생성 시점에 뭘 정해줄 수가 없음

// 정적 변수란? 컴파일 할 때? 메모리의 사이즈가 이미 다 정해지는 놈들

int main()
{
    // 입력받은 만큼 배열을 만들어야지?
    // 근데 바로 입구컷
    // 상수를 내놔라 

    // ESP 스택 포인터

    // 메모리 구조에서의 스택은? 미리 어느정도 점유율 하고 시작한다
    // 메모리의 주소가 0에서 시작한다 하면?
    int size;
    // 이제 메모리는 5를 가리킨다
    int tempArray[10];
    // 44까지 쓰겠쥬
    // 포인터가 45를 가리킴
    int tempSize;
    // 49
   // scanf("%d", &tempSize); // -> 계속 바뀜
   // int tempArrayTwo[tempSize]; // -> 뭘 정해줄 수가 없음
    // ???? 호텔에 단체 여행객이온다는데 이 미친놈들이 몇명인지 말을 안해줘 
    // 방을 몇개쓸건지도몰라?????????

    // 동적 할당을 해봅시다
    // 지역변수는 메모리 구조의 어디에? stack
    // 정적변수는 .data
    // 동적할당은 .heap

    // 힙 영역에 생성을 해주는? 함수는 malloc()이다
    // 생성을하면? Heap에 생성이 되긴 되는데 진짜 Heap저 멀리 생성되서
    // 여기 main에서 쓰기위해 포인터 변수로 연결고리를 만들어 준다!!

    void* ptr = malloc(4);  // malloc()의 파라미터로 할당받고자하는 크기를(Byte) 적어준다!!
                            // malloc()의 리턴은 void형으로 "없다"가 아닌? 알아서 써라이다.
    
    // 그래서 동적할당된얘를 int형으로 바꿔먹기위해
    // int*형 변수를 선언하고
    // void* 타입인 ptr을 int*로 캐스팅해서 int*변수에 넣어줌
    int* tempPtr = (int*)ptr;
    // 일반 포인터 쓰듯이 쓰면 된다
    *tempPtr = 4;

    // malloc()에 4를 넣는건 너무 하드코딩이고
    // void*를 다시 int*로 바꾸는것도 너무 귀찮다 한번에 할란다!

    // 미리 int* tpPtr변수를 선언하고
    // int의 크기만큼 sizeof(int) malloc에 넣어주고
    // malloc이 리턴하자마자 그자리에서 바로(int*)로캐스팅
    int* tpPtr = (int*)malloc(sizeof(int));
    

    // 배열을 원하는 만큼 할당받자!
    int ArraySize;
    printf("할당받을 배열의 크기를 정해주세요 : ");
    scanf("%d", &ArraySize);
    int* arrPtr = (int*)malloc(sizeof(int) * ArraySize);
    printf("\n배열에 넣을 값 입력 : ");
    for (int i = 0; i < ArraySize; ++i)
    {
        scanf("%d", &arrPtr[i]);
    }
    printf("\n배열에 들어간 값 출력 : ");
    for (int i = 0; i < ArraySize; ++i)
    {
        printf("%d ", arrPtr[i]);
    }
    // 메모리 해제
    // arrPtr은 아무것도 가리키지 않아요~
    free(arrPtr);
    arrPtr = NULL;
    // 메모리 누수
    
}

