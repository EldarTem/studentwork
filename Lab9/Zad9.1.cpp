#include<iostream>
using namespace std;
int main()
{
	int val, s = 0;
	cout << "enter the sequence of numbers\n";
	while (s <= 100)
	{
		cin >> val;
		s = s + val * val;
	}
	cout << "s=" << s;
	return 0;
}
