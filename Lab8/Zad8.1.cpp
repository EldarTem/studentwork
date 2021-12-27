#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int n, i;
	double t, a, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		f = f + a * pow(t, n - i);
	}
	cout << "f = " << f;
	cin.get();
	cin.get();

}
