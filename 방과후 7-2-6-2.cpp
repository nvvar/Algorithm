// 방과후 7-2-6-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input;
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)

		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < input - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j + i < input-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}

