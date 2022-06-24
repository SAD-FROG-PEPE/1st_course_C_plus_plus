#include <iostream>
using namespace std;

int main()
{
	int a, b;
	float per, e, f;
	cout<<"write your deposit ";
	cin>>a;
	cout<<"write the number of months ";
	cin>>b;
	cout<<" month's percent "<<(per = (a * 0.05) / 365 * 30)<<"$"<<endl;
	cout<<" all gained summ "<<(e = per * b)<<"$"<<endl;
	cout<<" all summ in the end "<<(f = a + per * b)<<"$";

	cin.get();
	cin.get();
}