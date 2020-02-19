#include<iostream>
using namespace std;
int main()
{
	int factor[100], exps[100];
	int n;
	cin >> n;
	int i=0;
	factor[i] = 2;
	exps[i] = 0;
	while (n % factor[i] == 0)
	{
		exps[i]++, n /= factor[i];
	}
	
	for (i = 1; i < 100; i++)
	{
		factor[i] = 2 * i + 1;
		exps[i] = 0;
	}
	for (i = 1; i < 100; i++)
	{
		while (n % factor[i] == 0)
		{
			exps[i]++, n /= factor[i];
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (exps[i] != 0)
			cout << factor[i] << "(" << exps[i] << ")";
	}
	return 0;
}