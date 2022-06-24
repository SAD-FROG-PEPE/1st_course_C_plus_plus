#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number, age, oldest, youngest, sr,i;
	cout << "Введите сколько человек посетило спортзал: ";
	cin >> number;
	while (number<1)
	{
		cout << "Столько людей прийти не могло, попробуйте снова, напишите число >1: ";
		cin >> number;
	}

	sr = 0;
	oldest = 0;
	youngest = 130;
	cout << "Введите по очереди возраст каждого посетителя: "<<endl;
	for (i = 0; i <number; i++)
	{
		cout << "Возраст "<<i+1<<"-ого: ";
		cin >> age;
		while (age < 1 || age>130)
		{
			cout << "Люди с таким возростом не существуют, введите возраст еще раз: ";
			cin >> age;
		} 
		
		if (oldest < age)
			oldest = age;
		if (youngest > age)
			youngest = age;
		sr += age;
	}

	cout << "Возраст самого взрослого: " <<oldest<< endl << "Возраст самого молодого: " <<youngest<< endl << "Средний возраст посетителей: " <<sr/number ;
	cin.get();
	cin.get();
}