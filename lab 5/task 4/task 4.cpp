#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int m[10];
    int i;
    cout << "Массив до: "<<endl;
    for (i = 0; i < 10; i++)
    {
            m[i] = rand() %8 +7;
            cout << m[i] << " ";
    }
    cout << endl<< "Массив после: "<<endl;
    for (i = 0; i < 10; i++)
    {
            if (m[i] > 10)
                m[i] -=10 ;
            cout << m[i] << " ";
    }
    cin.get();
    cin.get();
}