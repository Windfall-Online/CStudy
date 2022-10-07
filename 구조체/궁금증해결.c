#include <stdio.h>


void ChangeNum(int value, int value2)
{

	// TODO
	// 
	// 숫자가오면 바꾼다
	// 뭘로? 5로
	return;
}
// value = testPtr = &bb


int bbb = 10;
int ccc = 500;


int main()
{
	int bb = 100;
	int* testPtr = NULL;
	testPtr = &bb;
	int cc = 10;
	//testPtr = 0x000000CCD74FFB64'
	ChangeNum(1000, 5000);
	
	// vs 2019 - 32bit 2의32승 비트까지 양을 전달할 수 있다
	// 42? 4GB
	//         - 64bit
	// 2의 64승까지 무제한 수치도 근삿값
	// 왜 C를 처음배우냐 
	// ㅈㄴ구리니까
	// 이게 되네?


	int a = 10;
	int b = 20;
	int c = 30;

	printf("a : %x\n", &a);
	printf("b : %x\n", &b);
	printf("c : %x\n", &c);
	printf("bb : %x\n", &bbb);
	printf("cc : %x\n", &ccc);
	
	return;

}
