#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j;
	int m[5][5] = { {0,1,2,3,4},{3,2,1,0,-1},{2,3,4,5,6},{9,8,7,6,5},{4,5,6,7,8} };
	int s1[5], s2[5];
	cout << "Двумерный массив: "<<endl;
	for (i = 0; i <5; i++)
	{
		for (j= 0; j < 5;j++)
			cout << m[i][j] <<"  ";
		cout << endl;
	}

	for (i = 0; i < 5; i++)
	{
		s1[i] = 0;
		s2[i] = 0;
		for (j = 0; j <5; j++)
		{
			s1[i] += m[i][j];
			s2[i] += m[j][i];
		}
		cout <<"Сумма по "<<i+1<<"-й строке="<< s1[i] <<", а по столбцу="<< s2[i] << endl;
	}
	cin.get();
	cin.get();
}