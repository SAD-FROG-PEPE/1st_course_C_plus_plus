#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c,i;
	cout << "Введите по очереди начальное и конечное значение диапозона: "<<endl;
	cin >> a>>b;
	c = 0;
	while (a>=b)
	{
		cout << "Начальное значение диапозона должно быть меньше конечного, введите их еще раз: " << endl;
		cin >> a>>b;
	}

	cout << "Нечетные числа: ";
	for (i = a; i <= b; i++)
	{
		if (abs(i)% 2 == 1)
		{
			cout << i << " ";
			c += i;
		}
			
	}
	cout <<endl<< "Сумма нечетных чисел в диапозоне (" << a << "," << b << "): " <<c ;
	cin.get();
	cin.get();
}
