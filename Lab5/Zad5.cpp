#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	long double num1, num2, res;
	cout << "enter number 1: " << endl;
	cin >> num1;
	cout << "enter number 2: " << endl;
	cin >> num2;

	res = (-num1 + sqrt(num1 * num1 + 3 * num2)) / (2 * num2);
	cout << "the result 1 is: " << res << endl;

	res = sqrt((3 + num1 * num2) / 4 * num1 * num1);
	cout << "the result 2 is: " << res << endl;

	res = (6 - fabs(num1 - 3 * num2)) / sqrt(5 - num2 * num2);
	cout << "the result 3 is: " << res << endl;

	res = exp(num1 + 7) * sqrt(37 * num2 - num1 * num1 * num1);
	cout << "the result 4 is: " << res << endl;

	res = sin(num1) + (num2 * num2) / (cos(2 * num1) + 23);
	cout << "the result 5 is: " << res << endl;

	res = tan(num2) - fabs(num1 - 3 * num2 + 2 / sqrt(num2 + 4));
	cout << "the result 6 is: " << res << endl << "press enter to exit " << endl;

	system("Pause");
}
