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

#pragma region �����Ҵ�
    /*
    int arraySize;
    printf("������ �Է� : ");
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
#pragma region ��������

    int i = 0;
    login user;

    printf("���̵� �Է� : "); 
    scanf("%s", user.ID);
    printf("��й�ȣ �Է� : ");
    scanf("%s", user.PW);

    printf("������ ���̵� : %s\n", user.ID);
    printf("������ ��й�ȣ : ");
    while(user.PW[i] != '\0')
    {
        printf("*");
        ++i;
    }

#pragma endregion

}
