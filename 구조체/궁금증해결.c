#include <stdio.h>


void ChangeNum(int value, int value2)
{

	// TODO
	// 
	// ���ڰ����� �ٲ۴�
	// ����? 5��
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
	
	// vs 2019 - 32bit 2��32�� ��Ʈ���� ���� ������ �� �ִ�
	// 42? 4GB
	//         - 64bit
	// 2�� 64�±��� ������ ��ġ�� �ٻ�
	// �� C�� ó������ 
	// ���������ϱ�
	// �̰� �ǳ�?


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
