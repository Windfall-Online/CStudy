#include <stdio.h>
#include <conio.h>
// getchar() stdio.h
// getch(), getche()
// conio.h

int main()
{
	// getchar(); 
	// ���� 
	// �߰��� �Ű�ü�� �̿��ؼ� ����

	// Ű����     <-> ���� <->      ��ǻ��
	// ���ڿ��� �ι������Է¹��� ��
	// ���Ͱ� ���ۿ� ���Ƽ� �ι�°�Է¿� ���Ͱ� ����
	// getchar()�ѹ� ���ְų�?
	// scanf("%[^\n]d")

	// char bufCh = getchar();
	// �Է� ����
	// printf("%c", bufCh);
	// ABCDEF\n
	// ����(ABCDEF\n)
	// A

	// getch()�� ���۸� �Ⱦ�

	char testGetChar = getchar();
	printf("getchar() : %c\n", testGetChar);

	char testGetch = _getch();
	printf("getch() : %c\n", testGetch);
	
	char testGetche = _getche();
	printf("\n");
	printf("getche() : %c\n", testGetche);
}