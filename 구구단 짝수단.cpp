// 구구단 짝수단.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%d x %d = %d\n", i, j, j*i);
			}
		}
		printf("\n\n");
	}
	return 0;
}