#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int day;
	cout << "Введите номер дня: ";
	cin >> day;
	while (day < 1 || day>7)
	{
		cout << "Такого дня недели не существует, введите номер дня еще раз: ";
		cin >> day;
	}

	cout << "Расписание на данный день недели такое: "<<endl;
		switch (day)
		{
		case 1:
			cout <<"математика" <<endl<< "литература" <<endl<< "делаем дз";
			break;
		case 2:
			cout <<"русский" <<endl<< "литература" << endl << "делаем дз";
			break;
		case 3:
			cout <<"английский" <<endl<< "биология"<<endl<<"делаем дз";
			break;
		case 4:
			cout <<"химия" <<endl<< "делаем дз"<<endl<<"секция";
			break;
		case 5:
			cout <<"физ-ра" << endl <<"математика" << endl<< "делаем дз";
			break;
		case 6:
			cout <<"кружки"<<endl<<"отдыхаем";
			break;
		case 7:
			cout <<"делаем дз на неделю"<<endl<<"отдыхаем";
			break;
		}

	cin.get();
	cin.get();
}
