#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sum, a, b, c, d;
	cin >> sum;
	while (sum > 9999 || sum < 1)
	{
		cout << "Попробуйте снова, напишите число от 1 до 9999: ";
		cin >> sum;
	}

	a = sum / 1000;
	b = sum / 100 % 10;
	c = sum / 10 % 10;
	d = sum % 10;
	switch (a)
	{
	case 1:
		cout << "одна тысяча ";
		break;
	case 2:
		cout << "две тысячи ";
		break;
	case 3:
		cout << "три тысячи ";
		break;
	case 4:
		cout << "четыре тысячи ";
		break;
	case 5:
		cout << "пять тысяч ";
		break;
	case 6:
		cout << "шесть тысяч ";
		break;
	case 7:
		cout << "семь тысяч ";
		break;
	case 8:
		cout << "восемь тысяч ";
		break;
	case 9:
		cout << "девять тысяч ";
		break;
	}

	switch (b)
	{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	if (c == 1)
	{
		switch (d)
		{
		case 0:
			cout << "десять ";
			break;
		case 1:
			cout << "одиннадцать ";
			break;
		case 2:
			cout << "двенадцать ";
			break;
		case 3:
			cout << "тринадцать ";
			break;
		case 4:
			cout << "четырнадцать ";
			break;
		case 5:
			cout << "пятнадцать ";
			break;
		case 6:
			cout << "шестнадцать ";
			break;
		case 7:
			cout << "семнадцать ";
			break;
		case 8:
			cout << "восемнадцать ";
			break;
		case 9:
			cout << "девятнадцать ";
			break;
		}
		cout << "долларов";
	}
	else
	{
		switch (c)
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}

		switch (d)
		{
		case 1:
			cout << "один ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}

		if (d == 1)
			cout << "доллар";
		else if (d > 1 && d < 5)
			cout << "доллара";
		else if (d >= 5)
			cout << "долларов";
	}

	cin.get();
	cin.get();
}