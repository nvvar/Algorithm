// 이차원 반복.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int process();

int main()
{
	process();
    return 0;
}

int process()
{
	int k = 1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j == 9)
			{
				printf("%d:\n %d%d\n+%d%d\n=99\n", k, i, j, j, i);
				k++;
			}
		}
		printf("\n\n");
	}
	return 0;
}