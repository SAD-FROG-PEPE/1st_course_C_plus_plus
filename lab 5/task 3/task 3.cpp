#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int m[10][10];
	int s[10];
	int i, j,b,n;
	b = 9;
	for (i = 0; i < 10; i++)
	{
		s[i] = 0;
		for (j = 0; j < 10; j++)
		{
			m[i][j] = rand() %91 + 10;
			cout << m[i][j]<<"  ";
			s[i] += m[i][j];
		}
		cout << "Сумма " << i+1 << "-й строки=" << s[i] << endl;
		if (b < s[i])
		{
			b = s[i];
			n = i+1;
		}
				
		cout << endl;
	}
	cout << "Максимальная сумма(" << b<<") на строке-"<<n;
	cin.get();
	cin.get();
}