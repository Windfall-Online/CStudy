#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	char name[20] = {"abc"};
	char name2[20];
	// 텍스트 파일을 만들려면? w
	// 이미 있는걸 읽으려면 r
	fp = fopen("test.txt", "w");
	if (fp)
	{
		printf("파일이 성공적으로 생성되었습니다!\n");
		// scanf()// 이름, 성별, 직업, 나이
		// fprintf(fp, "%s %c %s %d", 이름, 성별, 직업, 나이);

		fclose(fp);

		fp = fopen("test333.txt", "r");
		if (fp)
		{
			fscanf(fp, "%s", name2);
			printf("%s", name2);
			fclose(fp);
		}
		else
		{
			printf("text.333.txt가없음\n");
		}
		
	}
	else
	{
		printf("파일이 연결되지 않았습니다\n");
	}

}