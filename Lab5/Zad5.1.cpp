#include<iostream>
using namespace std;

void main()
{
	char st[6];
	char ch;
	cout << "type characters and press enter: ";
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = ch;
	ch = st[4];
	st[4] = st[2];
	st[2] = ch;
	cout << "the result is: " << st << endl;
	ch = st[2];
	st[2] = st[0];
	st[0] = ch;
	cout << "the result is: " << st << endl;
	cin.get();
	cin.get();

}
