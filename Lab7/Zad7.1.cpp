#include<iostream>
using namespace std;

void main()
{
	setlocale(0, "");
	int x, y;
	cout << "enter point coordinates: \n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (x <= 1 && x >= 0 && y >= -1 && y <= 0) {
		cout << "4 ��������" << endl;
	}
	else if (x >= 1 && x <= 0 && y <= -1 && y >= 0) {
		cout << "2 ��������" << endl;
	}
	else {
		cout << "�� ����������� �������� �������" << endl;
	}
}
