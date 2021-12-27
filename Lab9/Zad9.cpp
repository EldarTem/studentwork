#include<iostream>
using namespace std;
void main()
{
	char ch;
	cout << "enter the sequence of symbols\n";
	do
	{
		cin >> ch;
		cout << (int)ch << '\n';
	} while (ch != '.');
	cout << "finish";
}
