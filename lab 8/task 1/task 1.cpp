#include <iostream>
using namespace std;
void Vvod(int** mat, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			*(mat[i] + j) = rand() % 90 + 10;
}
void Vivod(int** mat, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << *(mat[i] + j) << " ";
		cout << endl;
	}
	cout << endl;
}
void Zamena(int** mat, int size)
{
	for (int i = 0; i < size; i++)
	{
		int max = 9;
		int maxIndex = 0;
		for (int j = 0; j < size; j++)
		{
			int element = *(mat[i] + j);
			if (max < element)
			{
				max = element;
				maxIndex = j;
			}
		}
		int value = *mat[i];
		*mat[i] = *(mat[i] + maxIndex);
		*(mat[i] + maxIndex) = value;
	}
}
int main()
{
	int size=5;
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int** mat = new int* [size];
	cout << "Начальная матрица: ";
	for (int i = 0; i < size; i++)
		mat[i] = new int[size];
	Vvod(mat, size);
	Vivod(mat, size);
	cout << "Конечная матрица: ";
	Zamena(mat, size);
	Vivod(mat, size);
	for (int i = 0; i < size; i++)
		delete[] mat[i];
	delete[] mat;
	cin.get();
	cin.get();
}