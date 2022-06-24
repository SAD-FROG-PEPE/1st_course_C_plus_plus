#include <iostream>
using namespace std;
void print(int array[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 50+1;
		cout << array[i] << "  ";
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int mas1[8];
	int mas2[4];
	cout << "Элементы первого массива: ";
	print(mas1,sizeof(mas1)/sizeof(mas1[0]));
	cout <<endl<< "Элементы второго массива: ";
	print(mas2, sizeof(mas2) / sizeof(mas2[0]));
	cin.get();
	cin.get();
}