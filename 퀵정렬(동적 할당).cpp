/// 퀵 정 렬.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int subst(int*, int);
int finput(int*);
void quicksort(int*, int, int);
int swap(int*, int*);

int main()
{
	int input;
	int *arr = (int*)malloc(sizeof(int)*finput(&input));
	subst(arr, input);
	quicksort(arr, 0, input - 1);
	printf("\n\n\n결과값\n");
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", *(arr + i));
	}
	free(arr);
	return 0;
}

void quicksort(int* arr, int left, int right)
{
	int low = left, high = right, pivot = *(arr + left);
	if (left < right)
	{
		while (low < high) {
			do {
				low++;
			} while (*(arr + low) < pivot);
			while (*(arr + high) > pivot) {
				high--;
			}
			if (low < high)
			{
				swap((arr + low), (arr + high));
			}
		}
		swap((arr + left), (arr + high));
		quicksort(arr, left, high - 1);
		quicksort(arr, high + 1, right);
	}
}

int subst(int* arr, int input)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < input; i++)
	{
		*(arr + i) = rand() % (input * 5);
	}
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (*(arr + i) == *(arr + j))
			{
				*(arr + j) += 1;
				i = 0;
				break;
			}
		}
	}
	for (int i = 0; i < input; i++)
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

int finput(int* input)
{
	cin >> *input;
	return *input;
}