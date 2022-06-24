#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, h;
    cout << "Введите высоту треугольника: ";
    cin >> h;
    for (i = 1;i <= h * 2 - 1;i += 2)
    {
        for (j = 0;j < (h * 2 - 1 - i) / 2;j++)
            cout << " ";
        for (j = 0;j < i;j++)
            cout << "^";
        cout << endl;
    }
    cin.get();
    cin.get();
}
