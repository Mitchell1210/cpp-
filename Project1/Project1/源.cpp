#include<iostream>
using namespace std;
int main()
{
	char *p, s[1000] = { 0 };
	cin >> p >> s;
	int m = 1, sum = 0;
	for (int i = 0; p[i] != '\0'; i++)
	{
		m = 1;
		for (int j = 0; s[j] != '\0'; j++)
		{
			if (p[i + j] != s[j])
				m = 0;
		}
		if (m == 1)
			sum++;
	}
	cout << sum;
	return 0;
}