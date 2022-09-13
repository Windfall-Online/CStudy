#include <stdio.h>


int globalAdress = 100;

void ChangeConstString(const char** value)
{
    *value = "After Change";
}

int main()
{
    // 포인터
    // 
    // 

    int a = 10; 
    int *ptrA = &a; 

    // 변수이름이 *ptrA냐?
    // 아아아아잇 아니다
    // 변수이름은 ptrA
    // *는 연산자 어? 연산자면 어떤 연산을 가능케한다
    

    // ptrA 에 a의 주소가 들어가있음
    // 근데 '*'를 통해서 어떤 연산을 가능케 함
    // "역참조" 라고한다!
    // dereference
    // 역참조란? 주소를 거슬러 올라가서 그 주소안에 있는 값을 본다!!!!
    
    printf("a의 주소 : %p\n", &a);
    printf("ptrA의 값 : %p\n", ptrA);
    printf("a에 들어있는 값 : %d\n", a);
    printf("ptrA의 주소에 '*'를 사용해서 타고가면 있는 값 : %d\n"
        , *ptrA);
    printf("스택 어딘가에 있는 ptrA의 주소 : %p\n", &ptrA);
    printf("데이터 영역 : %p\n", &globalAdress);
    //번외) &ptrA의 주소를 치면 뭐가나오냐?
    //얘도 변수인지라 스택 어딘가에 할당이 되고 그 공간안에 a의주소를 넣은거임 

    
        
    
    // Before Change가 주소를 반환한다
    // const char* 주솟값을 타고가서 내용을 수정할 수 없다
    const char* StringSample = "Before Change";
    // char* const StringSample = 
    // 이렇게하면은 주소를 수정할 수 없다 내용은 수정 가능!
    
    // 내용물을 바꿀 수가 없으니
    // 그냥 주소를 바꿔버리자!
    StringSample = "Cefore Change";
    
    ChangeConstString(&StringSample);
    printf("%s", StringSample);

    // 이걸 이제 함수화 시켜보자
    // a = 10;
    // *ptrA = &a;
    // **ptrB = &ptrA;
    


}
