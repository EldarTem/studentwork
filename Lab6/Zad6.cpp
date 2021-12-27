#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int c;
	char h, j, b;
	cin >> h;
	c = (int)h;
	j = (char)c + 1;
	b = (char)c - 1;
	cout << "type characters and press Enter: " << h << endl;
	cout << "ASCII-code is: " << c << endl;
	cout << "the previous character is: " << b << endl;
	cout << "the next character is: " << j;
	cin.get();

}
