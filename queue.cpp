// queue.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#define QU 10000
int queue[QU] = { 0 };
void start();
void push(int);
void empty();
int front();
int back();
void pop();
void size();

int main()
{
	string inputS;
	int pushVal;
	cout << "push, empty, front, back, pop, size \n";
	while (1) {
		cin >> inputS;
		if (inputS == "push")
		{
			cin >> pushVal;
			push(pushVal);
		}
		else if (inputS == "empty")
		{
			empty();
		}
		else if (inputS == "front")
		{
			cout << front() << "\n";
		}
		else if (inputS == "back")
		{
			cout << back() << "\n";
		}
		else if (inputS == "pop")
		{
			pop();
		}
		else if (inputS == "size")
		{
			size();
		}
		else if (inputS == "end")
		{
			return 0;
		}
	}
}
void push(int pushVal)
{
	for (int i = 0; i < QU; i++)
	{
		if (*(queue + i) == 0)
		{
			*(queue + i) = pushVal;
			break;
		}
	}
}
void empty()
{
	if (queue[0] == NULL)
	{
		cout << "1\n";
	}
	else
	{
		cout << "0\n";
	}
}
int front()
{
	if (*queue == 0)
	{
		return -1;
	}
	else
		return queue[0];
}
int back()
{
	for (int i = 0; i < QU; i++)
	{
		if (*(queue+0)==0)
		{
			return -1;
		}
		else if (*(queue + i) == 0)
		{
			return *(queue + i - 1);
		}
	}
}
void pop()
{
	cout << *queue << "\n";
	for (int i = 0; i <= QU; i++)
	{
		if (*(queue + 1) == 0)
		{
			*queue = 0;
			break;
		}
		*(queue + i) = *(queue + i + 1);
		if (*(queue + i+2) == 0)
		{
			break;
		}
	}
}
void size()
{
	for (int i = 0; i < QU; i++)
	{
		if (*(queue + i) == 0)
		{
			cout << i << "\n";
			break;
		}
	}
}