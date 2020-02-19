#include<iostream>
using namespace std;
int main()
{
	int i, x[50];
	for (i = 0; i < 50; i++)
	{
		x[i] = 2 * i + 3;
	}
	for (i = 0; i < 50; i++)
	{
        if (x[i] != 0)
	    {
			for (int j = i+1; j < 50; j++)
			{
				if (x[j] % x[i] == 0)
					cout<<x[j]<<endl,x[j] = 0;
			 }
	    }
	}
	for (i = 0; i < 50; i++)
	{
		if (x[i] != 0)
			cout << x[i] << "\t";
	}
	
	return 0;
}