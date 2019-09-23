#define INT int

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

struct ListComponent
{
	INT val;
	bool crossed = false;
	ListComponent()
	{
		val = 0;
		crossed = false;
	}
	ListComponent(int v)
	{
		val = v;
	}
};

int main()
{
	INT max;
	cin >> max;

	vector<bool> lbool(max-1);
	
	INT i = (INT)0;
	INT j;

	INT lim = sqrt(max);
	
	for (i = 2; i < lim; i++)
	{
		if (lbool[i - 1])
		{
			continue;
		}
		for (j = 0; j < max - 1; j++)
		{
			if ((j + 1) % i == 0 && (j + 1) != i)
			{
				lbool[j] = true;
			}
		}
	}

	i = max - 1;
	for (i = max - 2; i >= 0; i--)
	{
		if (!(lbool[i]))
		{
			cout << i + 1 << endl;
		}
	}

	return 0;
}