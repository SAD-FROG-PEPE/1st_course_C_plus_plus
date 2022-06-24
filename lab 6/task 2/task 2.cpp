#include <iostream>
using namespace std;
void print(int array[5][5])
{
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = rand() % 30 + 30;
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
}
int ma(int array[5][5]) 
{
	int value=0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j< 5; j++)
		{
			if (value < array[i][j])
				value = array[i][j];
		}
	return value;
}
int mi(int array[5][5])
{
	int value = 70;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			if (value > array[i][j])
				value = array[i][j];
		}
	return value;
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int matrix[5][5];
	cout << "Матрица: " << endl;
	print(matrix);
	cout<<"Наибольшее значение= "<<ma(matrix)<<endl<< "Наименьшее значение= " << mi(matrix);
	cin.get();
	cin.get();
}