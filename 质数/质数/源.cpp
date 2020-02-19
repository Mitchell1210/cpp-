#include<iostream>
using namespace std;
int main()
{
	int n, i,m=1;
	cin >> n;
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			m = 0;
	}
	if (n == 1)
		m = 0;
	if (m == 1)
		cout << "Y";
	else cout << "N";
	return 0;
}