#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	char name[20] = {"abc"};
	char name2[20];
	// �ؽ�Ʈ ������ �������? w
	// �̹� �ִ°� �������� r
	fp = fopen("test.txt", "w");
	if (fp)
	{
		printf("������ ���������� �����Ǿ����ϴ�!\n");
		// scanf()// �̸�, ����, ����, ����
		// fprintf(fp, "%s %c %s %d", �̸�, ����, ����, ����);

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
			printf("text.333.txt������\n");
		}
		
	}
	else
	{
		printf("������ ������� �ʾҽ��ϴ�\n");
	}

}