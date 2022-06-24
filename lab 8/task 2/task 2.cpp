#include <iostream>
using namespace std;
void vvod(int *i,int *j,int k)
{
	cout << "Введите количество строк и столбцов " << k << "-ой матрицы:";
	cin>>*i >> *j;
}
int** matrix_multiply(int** matrix1, int sizei1, int sizej1, int** matrix2, int sizei2, int sizej2)
{
	int** result = new int* [sizei1];
	for (int i = 0; i < sizei1; i++)
		result[i] = new int[sizej2];
	for (int i = 0; i < sizei1; i++)
		for (int j = 0; j < sizej2; j++)
		{
			int value = 0;
			for (int k = 0; k < sizej1; k++)
				value += matrix1[i][k] * matrix2[k][j];
			result[i][j] = value;
		}
	return result;
}
int** make(int sizei, int sizej)
{
	int** matrix = new int* [sizei];
	for (int i = 0; i < sizei; i++)
		matrix[i] = new int[sizej];
	return matrix;
}
void fill(int** matrix, int sizei, int sizej,int k)
{
	cout << "Введите элементы "<<k<<"-ой матрицы" << endl;
	for (int i = 0; i < sizei; i++)
		for (int j = 0; j < sizej; j++)
			cin >> matrix[i][j];
}
void print(int** matrix, int sizei, int sizej,int k)
{
	cout << k<<"-ая матрица:" << endl;
	for (int i = 0; i < sizei; i++)
	{
		for (int j = 0; j < sizej; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
void deletem(int** matrix, int sizei)
{
	for (int i = 0; i < sizei; i++)
		delete[] matrix[i];
	delete[] matrix;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int i1,j1,i2,j2;
	vvod(&i1, &j1, 1);
	vvod(&i2, &j2, 2);
	while (j1 != i2 || i1 < 0 || j1 < 0 || i1 < 0 || j2 < 0)
	{
		cout << "Вы ввели неправильные размеры (должно быть i1,i2,j1,j2>0 и j1=i2), попробуйте ещё раз " << endl;
		vvod(&i1, &j1, 1);
		vvod(&i2, &j2, 2);
	}
	auto matrix1 = make(i1, j1);
	auto matrix2 = make(i2, j2);
	fill(matrix1, i1, j1,1);
	fill(matrix2, i2, j2,2);
	auto result = matrix_multiply(matrix1, i1, j1, matrix2, i2, j2);
	print(matrix1, i1, j1,1);
	print(matrix2, i2, j2,2);
	print(result, i1, j2,3);
	deletem(matrix1, i1);
	deletem(matrix2, i2);
	deletem(result, i1);
	cin.get();
	cin.get();
}