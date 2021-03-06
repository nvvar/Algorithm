// 퀵 정 렬.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 100
int subst(int*);
void quicksort(int*, int, int);
int swap(int*, int*);

int main()
{
	int arr[qo] = { 0 };
	subst(arr);
	quicksort(arr, 0, qo - 1);
	printf("\n\n\n결과값\n");
	for (int i = 0; i < qo; i++)
	{
		printf("%d\n", *(arr + i));
	}
	return 0;
}

void quicksort(int* arr, int left, int right)
{
	int low = left, high = right + 1, pivot = *(arr + left);
	if (left < right)
	{
		do {
			do {
				low++;
			} while (*(arr + low) < pivot);
			do {
				high--;
			} while (*(arr + high) > pivot);
			if (low < high)
			{
				swap((arr + low), (arr + high));
			}
		} while (low < high);
		swap((arr + left), (arr + high));
		quicksort(arr, left, high - 1);
		quicksort(arr, high + 1, right);
	}
}

int subst(int* arr)
{
	int err = 1;
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(arr + i) = rand() % qo;
	}
	for (int i = 0; i < qo; i++)
	{
		for (int j = 0; j < qo; j++)
		{
			if (i == j) continue;
			if (*(arr + i) == *(arr + j))
			{
				*(arr + j) += 1;
				i = 0;
				break;
			}
		}
	}
	for (int i = 0; i < qo; i++)
	{
		printf("%d번째 난수 : %d\n", i + 1, *(arr + i));
	}
	return 0;
}

int swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}