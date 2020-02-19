#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char *p;
	cin >> p;
	char m;
	int sum=0;
	if (p[0] == '0')
		m = '1';
	else m = '0',cout<<"-";
	for (int i = 1; i < 15; i++)
	{
		if (p[i] == m)
			sum += pow(2, 15 - i);
	}
	cout << sum;
	return 0;
}