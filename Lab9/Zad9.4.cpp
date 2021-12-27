#include<iostream>
using namespace std;
int main()
{
	int h = 0, min = 0, sec = 0, res = 0;
	while (true)
	{
		h = 0;
		min = 0;
		sec = 0;
		res = 0;
		cout << "Enter hours: ";
		cin >> h;
		if (h >= 0)
		{
			cout << "Enter minutes: ";
			cin >> min;
			if (min >= 0 && min <= 60)
			{
				cout << "Enter seconds: ";
				cin >> sec;
				if (sec >= 0 && sec <= 60)
				{
					res = sec + min * 60 + h * 3600;
					cout << "The result is:" << res << endl;
				}
				else
					cout << "Incorrect value" << endl;
			}
			else
				cout << "Incorrect value" << endl;
		}
		else
			cout << "Incorrect value" << endl;
	}
}
