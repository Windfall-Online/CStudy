#include <stdio.h>
#include <conio.h>
// getchar() stdio.h
// getch(), getche()
// conio.h

int main()
{
	// getchar(); 
	// 버퍼 
	// 중간에 매개체를 이용해서 간다

	// 키보드     <-> 버퍼 <->      컴퓨터
	// 문자열을 두번연속입력받을 때
	// 엔터가 버퍼에 남아서 두번째입력에 엔터가 들어간다
	// getchar()한번 해주거나?
	// scanf("%[^\n]d")

	// char bufCh = getchar();
	// 입력 버퍼
	// printf("%c", bufCh);
	// ABCDEF\n
	// 버퍼(ABCDEF\n)
	// A

	// getch()는 버퍼를 안씀

	char testGetChar = getchar();
	printf("getchar() : %c\n", testGetChar);

	char testGetch = _getch();
	printf("getch() : %c\n", testGetch);
	
	char testGetche = _getche();
	printf("\n");
	printf("getche() : %c\n", testGetche);
}