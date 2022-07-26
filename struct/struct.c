#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SILVER 1
#define GRAPHITE 2
#define GOLD 3;
#define SIERRABLUE 4
#define SPACEGRAY 5

// 구조체
// struct
// 구조체란 뭐냐?
// 자료형을 모아놓은 또하나의 자료형

// 구조체 하나 생성
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
    // 핸드폰 공장을 만들거임
    // 핸드폰이 가질수 있는 속성
    const char* phoneName = "iphone13pro";
    const char* OsName = "ios16";
    int phoneMemory = 512;
    int phoneColor = 5;
    
    // const char*phoneName2 = ...쭉쭉쭉감
    // 따로따로하면 변수가 감당이안된다
    
    // 구조체는? 하나의 자료형

    // 객체지향
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

    // 여기서 끝내면 노잼이다
    // 과연 이렇게 쉽게해도 될까?
    
}
