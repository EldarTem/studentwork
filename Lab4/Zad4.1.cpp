#include<iostream>
using namespace std;

void main()
{
	double x = 0, y = 0;
	char z;
	cin >> x >> z >> y;
	if (z == '+')
		cout << x + y;
	else
		if (z == '-')
			cout << x - y;
		else
			cout << "error";
	cin.get();
	cin.get();

}
