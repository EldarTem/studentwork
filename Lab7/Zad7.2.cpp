#include<iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	char sign;
	double num1, num2;
	cout << "������� ������ ����� " << endl;
	cin >> num1;
	cout << "������� �������� " << endl;
	cin >> sign;
	cout << "Enter number 2: ";
	cin >> num2;
	switch (sign) {
	case '+':
	{
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	}
	case '-':
	{
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	}
	case '*':
	{
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	}
	case '/':
	{
		if (num2 == 0)
		{
			cout << "������ ������ �� ����!" << endl;
			sign_check = 1;
		}
		else {
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
		}

	}
	default:
	{
		cout << "�� ����� ������������ ���� ��������" << endl;
		break;
	}
	}
}
