#include <iostream>
using namespace std;
void Vvod(int* array[], int gorizont, int vertical)
{
	for (int i = 0; i < gorizont; i++)
		for (int j = 0; j < vertical; j++)
			*(array[i] + j) = rand() % 40 + 10;
}
void Print(int* array[], int gorizont, int vertical)
{
	for (int i = 0; i < gorizont; i++)
	{
		for (int j = 0; j < vertical; j++)
			cout << *(array[i] + j) <<' ';
		cout << endl;
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int stroki , stolbci;
	cout << "Введите количество строк и столбцов: "<<endl;
	cin >> stroki >> stolbci;
	while (stroki<1 || stolbci<1)
	{
		cout << "Введите количество строк и столбцов еще раз, их должно быть положительное число: " << endl;
		cin >> stroki >> stolbci;
	}
	int** array = new int* [stroki];
	for (int i = 0; i < stroki; i++)
		array[i] = new int[stolbci];
	Vvod(array, stroki, stolbci);
	Print(array, stroki, stolbci);
	cin.get();
	cin.get();
}