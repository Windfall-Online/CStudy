#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SILVER 1
#define GRAPHITE 2
#define GOLD 3;
#define SIERRABLUE 4
#define SPACEGRAY 5

// ����ü
// struct
// ����ü�� ����?
// �ڷ����� ��Ƴ��� ���ϳ��� �ڷ���

// ����ü �ϳ� ����
struct AppleSilicon
{
    const char* ProductName;
    const char* OsName;
    const char* Memory;
    const char* Color;
    bool AppleCare;
};

typedef struct AppleSilicon Apple;

int main()
{
    // �ڵ��� ������ �������
    // �ڵ����� ������ �ִ� �Ӽ�
    const char* phoneName = "iphone13pro";
    const char* OsName = "ios16";
    int phoneMemory = 512;
    int phoneColor = 5;
    
    // const char*phoneName2 = ...�����߰�
    // ���ε����ϸ� ������ �����̾ȵȴ�
    
    // ����ü��? �ϳ��� �ڷ���

    // ��ü����
    Apple Macbook;
    Macbook.ProductName = "M1 Macbook Air";
    Macbook.OsName = "Monterey";
    Macbook.Color = SILVER;
    Macbook.Memory = 256;
    Macbook.AppleCare = true;

    Apple iphone;
    iphone.ProductName = "iphone 14 Pro Max";
    iphone.Color = SILVER;
    iphone.Memory = 1024;
    iphone.OsName = "iOS16";
    iphone.AppleCare = false;

    // ���⼭ ������ �����̴�
    // ���� �̷��� �����ص� �ɱ�?
    
}
