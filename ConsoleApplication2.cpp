// ConsoleApplication2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int block();

int main()
{
	while(1)block();
    return 0;
}
int block()
{
	int rand_num;
	srand((unsigned)time(NULL));
	int k = rand() % 7;
	int bloc[7][4][4][4] =
	{ { {0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
	{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0} },
	{ {0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
	{0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},{ 0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0 }} };
	for (int l = 0; l < 4; l++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (bloc[k][l][i][j] == 1)
				{
					printf("■");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

