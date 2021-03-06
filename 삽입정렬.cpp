// 삽입정렬.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 100
int subst(int*);
int subst_output(int*);
int sort(int*);

int main()
{
	int arr[qo] = { 0 };
	subst(arr);
	subst_output(arr);
	sort(arr);
    return 0;
}
int sort(int* arr)
{
	int key,i,j,sp;
	for (i = 0;i < qo;i++)
	{
		key = *(arr + i);
		sp = i;
		for (j = i - 1; j >= 0; j--)
		{
			if (key < *(arr + j))
			{
				*(arr + (j + 1)) = *(arr + j);
				sp = j;
			}
		}
		*(arr + sp) = key;
	}
	for (i = 0; i < qo; i++)
	{
		printf("%d\n", *(arr + i));
	}
	return 0;
}

int subst(int* arr)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(arr + i) = rand() % (qo * 3); //난수 배열에 대입
		for (int j = 0; j < i; j++)
		{
			if (*(arr + i) == *(arr + j))//난수 중복체크, 중복제거
			{
				*(arr + i) += 1;
				i--;
				break;
			}
		}
	}
	return 0;
}

int subst_output(int*arr)
{
	for (int i = 0; i < qo; i++)
	{
		printf("%d\n", *(arr + i));
	}
	printf("\n\n\n\n");
	return 0;
}