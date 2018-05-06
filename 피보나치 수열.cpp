// 피보나치 수열.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int fibo(int);
int finput(int*);

int main()
{
	int input;
	finput(&input);
	printf("번째 피보나치 수열의 수");
	printf("\n\n%d",fibo(input));
    return 0;
}

int finput(int* input)
{
	cin >> *input;
	return 0;
}

int fibo(int input)
{
	if (input == 1)
	{
		return 1;
	}
	else if (input < 1)
	{
		return 0;
	}
	else
	{
		return fibo(input - 1) + fibo(input - 2);
	}
}