#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double **P=0;
	double value;
	cout << "Введите значение: ";
	cin >> value;
	double *kal=&value;
	P = &kal;
	cout << "Двойной указатель:  " << **P <<", указатель: "<< *kal << ", введенное значение: " << value;
	cin.get();
	cin.get();
}