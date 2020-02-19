#include<iostream>
using namespace std;
void print1(int n)
{
	for (int i = 1; i <= n; i++)
		cout << i;
}
void print2(int n)
{
	if (n)
	{
		print2(n - 1);
		cout << n;
	}
}
int main()
{
	int n;
	cin >> n;
	print1(n);
	return 0;
}