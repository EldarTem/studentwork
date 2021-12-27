#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c;
	float p, s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s;

}
