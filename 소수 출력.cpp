// 입력까지 모든 소수 출력.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
void finput(int*);
int process(int);
int main()
{
	int input,i=2;
	char im;
	finput(&input);
	while (i <= input)
	{
		im = process(i);
		if (im)
		{
			printf("%d\n", im);
		}
		i++;
	}
    return 0;
}

void finput(int* input)
{
	cin >> *input;
}

int process(int vks)
{
	int count = 0;
	for (int i = 2; i < vks; i++)
	{
		if (vks % i == 0)
		{
			count++;
		}
	}
	//printf("카운트%d\n", count);
	if (count == 0)
	{
		return vks;
	}
	else
	{
		return 0;
	}
}