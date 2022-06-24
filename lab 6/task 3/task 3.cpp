#include <iostream>
using namespace std;
int step()
{
	int value;
	value = rand() % 2;
	if (value == 0)
		cout << "Первым ходит пользователь"<<endl<<endl;
	else
		cout << "Первым ходит компьютер"<<endl<<endl;
	return value;
}
void game(int* array,int value)
{
	int a, b;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	array[value] = a + b;
	cout << "[" << a << "]+[" << b << "]=" << array[value]<<endl;
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int mas1[4],mas2[4];
	int s1, s2,num;
	s1 = s2 = 0;
	num = step();
	for (int i = 0; i < 4; i++)
	{
		cout << i+1<<"-ЫЙ ХОД" << endl;
		game(mas1,i);
		game(mas2,i);
		s1 = s1 + mas1[i];
		s2 = s2 + mas2[i];
		cout << "сумма очков: " << s1 << " и " << s2<<endl<<endl;
	}
	if (s1 > s2 && num == 0 || s1 < s2 && num == 1)
		cout << "Выиграл пользоваетель";
	if (s1 > s2 && num == 1 || s1 < s2 && num == 0)
		cout << "Выиграл компьютер";
	if (s1 == s2)
		cout << "Ничья";
	cin.get();
	cin.get();
}