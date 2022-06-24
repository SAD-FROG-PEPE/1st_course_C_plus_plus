#include <iostream>
using namespace std;
double* perv(double* array, int size)
{
	array = new double[size];
	return array;
}
void vtor(double* array, int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 50;
}
void tri(double* array, int size)
{
	for (int i = 0; i < size; i++)
		cout<<array[i] <<" ";
}
void chet(double* array)
{
	delete[] array;
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int size, vibor;
	double* array;
	while (true)
	{
		cout<< "Введите размер массива: ";
		cin>>size;
		array = perv(array, size);
		vtor(array, size);
		tri(array, size);
		chet(array);
		cout<<endl<<"Хотите закончить работу?"<<endl<<"Введите 1-если да,0-если нет"<<endl;
		cin>>vibor;
		if (vibor == 1)
			break;
	}
}