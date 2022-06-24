#include <iostream>
#include <string>
using namespace std;

int main()
{
	int b, a, i;
	cout << "write a number with 4 signs ";
	cin >> a;
	if (a > 999 && a < 10000)
	{
		for (i = 0;i < 4;i++)
		{
			b = a % 10;
			cout << b;
			a /= 10;
		}
	}
	else
		cout << "it's not four-digit number.Try again.";
	cin.get();
	cin.get();
}