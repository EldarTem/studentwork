#include<iostream>
using namespace std;
int main()
{
	int f = 5;
	for (int i = 1; i < 6; i++)
	{
		for (int p = f; p > 0; p--)
		{
			cout << i << " ";
		}
		cout << endl;
		f--;
	}
}
