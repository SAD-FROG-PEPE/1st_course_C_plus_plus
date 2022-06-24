#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int finger;
    cout << "Введите номер пальца: ";
    cin >>finger;
	while (finger<1 || finger>5)
	{
		cout << "У вас нет на руке такого пальца, введите число от 1 до 5: ";
		cin >> finger;
	}

	switch (finger)
	{
	case 1:
		cout <<"Это большой палец";
		break;
	case 2:
		cout <<"Это указательный палец";
		break;
	case 3:
		cout <<"Это средний палец";
		break;
	case 4:
		cout << "Это безымянный палец";
		break;
	case 5:
		cout <<"Это мизинец";
		break;
	}

	cin.get();
	cin.get();
}
