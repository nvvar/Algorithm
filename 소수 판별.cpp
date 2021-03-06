// 소수 판별.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int finput(int*);
int process(int);
int output(int);
int main()
{
	int input;
	finput(&input);
	output(process(input));
    return 0;
}

int finput(int* input)
{
	cin >> *input;
	return 0;
}

int process(int input)
{
	if (input == 1)
		return -1;
	int count = 0;
	for (int i = 2; i < input; i++)
	{
		if (input % i == 0)
		{
			count++;
			break;
		}
	}
	return count;
}
int output(int res)
{
	if (res == 0)
	{
		printf("소수");
	}
	else if (res == -1)
	{
		printf("1");
	}
	else
	{
		printf("합성수");
	}
	return 0;
}