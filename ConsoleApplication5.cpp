#include "stdafx.h"
int main()
{
	int input[6] = { 0 };
	int en = 0, on = 0, ec=0, oc=0;
	for (int i = 0; i < 6; i++)
	{
		cin >> input[i];
		if (input[i] % 2 == 0)
		{
			if (input[i] > en)
			{
				en = input[i];
				ec++;
			}
		}
		else
		{
			if (input[i] % 2 == 1)
			{
				on = input[i];
				oc++;
			}
		}
	}
	if (oc != 0)
	{
		cout << on << " ";
	}
	if (ec != 0)
	{
		cout << en << " ";
	}
}