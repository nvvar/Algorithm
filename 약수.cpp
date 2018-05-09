// 약수.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int process(int);
int finput(int*);
int main()
{
	int input;
	finput(&input);
	process(input);
    return 0;
}

int process(int max)
{
	for (int i = 1; i <= max; i++)
	{
		printf("%d의 약수:", i);
		for (int j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
}
int finput(int* input)
{
	cin >> *input;
	return 0;
}