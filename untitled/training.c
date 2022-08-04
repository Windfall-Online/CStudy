#include <stdio.h>
#include <stdlib.h>

struct Login
{
    char ID[20];
    char PW[20];
};
typedef struct Login login;

int main()
{

#pragma region 동적할당
    /*
    int arraySize;
    printf("사이즈 입력 : ");
    scanf("%d", &arraySize);

    int* ptrArray = (int*)malloc(sizeof(int) * arraySize);
    for(int i = 0; i < arraySize; ++i)
    {
        ptrArray[i] = i;
    }
    for(int i = 0; i < arraySize; ++i)
    {
        printf("%d\n", ptrArray[i]);
    }
    */
#pragma endregion
#pragma region 연습문제

    int i = 0;
    login user;

    printf("아이디 입력 : "); 
    scanf("%s", user.ID);
    printf("비밀번호 입력 : ");
    scanf("%s", user.PW);

    printf("유저의 아이디 : %s\n", user.ID);
    printf("유저의 비밀번호 : ");
    while(user.PW[i] != '\0')
    {
        printf("*");
        ++i;
    }

#pragma endregion

}
