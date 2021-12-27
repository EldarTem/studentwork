#include<iostream>
using namespace std;
int main()
{
	int sum = 0, mul = 1, i = 0;
	while (true)
	{
		cin >> i;
		if (i == 0)
			break;
		else
		{
			if (i > 10 && i < 25)
			{
				sum = sum + i;
			}
			if (i > 15)
			{
				mul = mul * i;
			}
		}
	}
	if (sum > mul)
		cout << mul;
	else
		cout << sum;
}
