#include <stdio.h>
#define PT_Knight 0
#define MT_Slime 1

// 달팽이배열

#define RIGHT 0
#define DOWN 1
#define LEFT 2
#define UP 3


// 구조체?
// 구조체 포인터?
// 포인터로 
// int형변수 double형변수
// 가리켰었음 이제는 구조체를 이제 가리켜보겠다!
// '->' 간접 참조 연산자라는게 등장한다

// 공용체는?
// 구조체랑 키워드가 다름 : union
// 안쓰는 이유가있음

// 열거형 enum
// enumrator
// 이거 잡기술 

struct MyStruct
{
	int _data;
	double _secondData;
};
typedef struct MyStruct MyStruct;
// 구조체는 각각 분리된 공간이 있음
//[ _data  ] [ _secondData ]
// 4byte		4byte

union MyUnion
{
	int _data;
	double _doubleData;
};
typedef union MyUnion MyUnion;
// 공용체는 공용으로 씀
// [         공유공간          ]
// 


void PrintStructData(MyStruct* value)
{
	printf("1번방법 : %d\n", (*value)._data);
	printf("2번방법 : %d\n", value->_data);
}

enum Color
{
	C_BLACK = 0,
	C_WHITE = 1,
	C_GREEN = 2,
};

enum Race
{
	R_WHITE = 0,
	R_BLACK = 1,
	R_YELLOW = 2,
};

// 이름 중복 조심

int main()
{
	int myColor = C_BLACK;

	MyStruct sampleStruct; // 객체 instance // 원본
	MyStruct* ptStruct;
	ptStruct = &sampleStruct;

	(*ptStruct)._data;
	ptStruct->_data;
	sampleStruct._data;
	// -> : *. *와.을 동시에쓰는 느낌

	// ->는 구조체의 주소를 담고있는 포인터를 통해서 바로 데이터로 접근할 때
	// 쓴다!!

	printf("sizeof MyStruct : %d\n", (unsigned int)(sizeof(MyStruct)));

	MyUnion sampleUnion;
	sampleUnion._data = 10;
	printf("_data : %d, _doubleData : %d\n", sampleUnion._data, (unsigned int)(sampleUnion._doubleData));
	sampleUnion._doubleData = 100.0;
	printf("_data : %d, _doubleData : %d\n", sampleUnion._data, (unsigned int)(sampleUnion._doubleData));
	



}

