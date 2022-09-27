#include <stdio.h>
#include <stdlib.h>

// 학교수업중에 모르는거 or 이제까지 했던거 중에 모르겠는거
// 전역, 정적은 왜 0인지

// 구조체
// 얘는 어느정도는 C++의 3가지 속성중 캡슐화랑 엮여있다
// 사실 얘는 변수 여러개를 하나로 묶는
// 연관된 데이터를 논리적으로 묶은

// 연관된 데이터들을 묶어서 하나의 새로운 자료형을 만든다!!
struct MobilePhone
{
	int _serialId;
	int _size;
	int _color;
};
typedef struct MobilePhone MobilePhone;


int main()
{
	// 지역은 쓰레기값인데

	// struct 구조체이름
	//	{
	//		여러가지 변수
	//	}
	
	// 객체(instance)
	// 구조체정의는 설계도고 
	// 그 정의한 구조체로 뭔가를 하나 생성하면 그게 객체가 된다
	// 초기화 방법1
	MobilePhone a1;
	a1._serialId = 0;
	a1._color = 0;
	a1._size = 0;
	// 초기화 방법2
	MobilePhone a2 = { 100, 1, 5 };
	printf("%d", sizeof(MobilePhone));

	MobilePhone a3;
	a3._color;
	// 나는 Heap에다가 생성할래!
	MobilePhone* a4 = (MobilePhone*)malloc(sizeof(MobilePhone));
	a4->_color;
	
	return 0;
	

}

