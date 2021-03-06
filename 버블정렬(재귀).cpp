#include "stdafx.h"
int subst(int*, int);
int sort(int*, int);
int swap(int*, int*);
int main()
{
	int input;
	cin >> input;
	int* arr = (int*)malloc(sizeof(int)*input);
	subst(arr, input);
	sort(arr, input);
	printf("\n\n\n정렬 후\n");
	for (int i = 0; i < input; i++)
	{
		printf("%d번째 : %d\n", i + 1, *(arr + i));
	}
	return 0;
}

int subst(int* arr, int input)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < input; i++)
	{
		*(arr + i) = rand() % (input * 200);
		for (int j = 0; j < i; j++)
		{
			if (*(arr + i) == *(arr + j))
			{
				*(arr + i) = *(arr + i) + 1;
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < input; i++)
	{
		printf("%d번째 난수: %d\n", i + 1, *(arr + i));
	}
	return 0;
}

int sort(int* arr, int input)
{
	if (input == 0)
		return 0;
	for (int i = 0; i < input - 1; i++)
	{
		if (*(arr + i) > *(arr + (i + 1)))
		{
			swap((arr + i), (arr + (i + 1)));
		}
	}
	sort(arr, input - 1);
}

int swap(int* a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}