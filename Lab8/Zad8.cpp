#include <iostream>
using namespace std;
void main()
{
	int sum = 0, j = 0;
	for (int i = 2; i += 2;)
	{
		cout << "Enter next number: ";
		cin >> j;
		if (j == 0)
			break;
		else
			sum = sum + i * j;
	}
	cout << "The Result is: " << sum;
}
