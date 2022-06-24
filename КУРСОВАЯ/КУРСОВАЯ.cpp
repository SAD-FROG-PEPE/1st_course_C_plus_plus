#include <iostream>
#include <cmath>
using namespace std;
int proverka(int a,int b)
{
	int value;
	cin >> value;
	while (value < a || value>b)
	{
		cout << "Вы ввели неправилное число из диапозона, попробуйте снова: " << endl;
		cin >> value;
	}
	return value;
}
void dvaiygol(double *pa, double *pb, double *palfa)
{
	cin >> *pa >> *pb >> *palfa;
	while (*palfa <= 0 || *palfa >= 180 || *pa <= 0 || *pb <= 0)
	{
		cout << "Такой фигуры не существует, введите другие значения по очереди: " << endl;
		cin >> *pa >> *pb >> *palfa;
	}
}
void dva(double *pa,double *pb)
{
	cin >> *pa >> *pb;
	while (*pa <= 0 || *pb <= 0)
	{
		cout << "Такой фигуры не существует, введите другие значения по очереди: " << endl;
		cin >> *pa >> *pb;
	}
}
void odin(double *pa)
{
	cin >> *pa;
	while (*pa <= 0)
	{
		cout << "Такой фигуры не существует, введите другие значения по очереди: " << endl;
		cin >> *pa;
	}
}
void odiniygol(double *pa, double *palfa,int value)
{
	cin >> *pa >> *palfa;
	while (*pa <= 0 || *palfa <= 0 || *palfa >= value)
	{
		cout << "Такого треугольника не существует, введите другое основание и прилижащий угол: " << endl;
		cin >> *pa >> *palfa;
	}
}
void dvaisrav(double *pa, double *pb,int value)
{
	cin >> *pa >> *pb;
	while (*pa <= 0 || *pb <= 0 || *pa < *pb*value)
	{
		cout << "Такого треугольника не существует, введите другую гипотенузу и катет: " << endl;
		cin >> *pa >> *pb;
	}
}
void tri(double *pa, double *pb, double *pc)
{
	cin >> *pa >> *pb >> *pc;
	while (*pa + *pb < *pc || *pa + *pc < *pb || *pb + *pc < *pa || *pa <= 0 || *pb <= 0 || *pc <= 0)
	{
		cout << "Такого треугольника не существует, введите другие стороны: " << endl;
		cin >> *pa >> *pb >> *pc;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int one, two, three;
	double p, s, a, b, c, x1, x2, x3, y1, y2, y3, z1, z2, z3, alfa, beta;
	cout << "Площадь, какой фигуры вы хотите найти?" << endl << "1-треугольник" << endl << "2-фигуры, связанные с кругом" << endl << "3-квадрат" << endl << "4-прямоугольник" << endl << "5-ромб" << endl << "6-трапеция" << endl << "7-овал" << endl << "8-паралеллограм" << endl << "9- н-угольник" << endl;
	one=proverka(1,9);
	switch (one)
	{
	case 1:
		cout << "Какой именно у вас трегольник?" << endl << "1-разностороний" << endl << "2-равнобедренный" << endl << "3-прямоугольный" << endl << "4-равносторонний" << endl;
		two=proverka(1,4);
		switch (two)
		{
		case 1:
			cout << "Выберите способ расчета площади разностороннего треугольника: " << endl << "1-по трем сторонам" << endl << "2-по двум сторонам и углу между ними" << endl << "3-по стороне и двум углам" << endl << "4-по высоте и основанию" << endl << "5-по координатам вершин" << endl << "6-по векторам" << endl;
			three=proverka(1,6);
			switch (three)
			{
			case 1:
				cout << "Введите по очереди стороны a,b,c: " << endl;
				tri(&a,&b,&c);
				p = (a + b + c) / 2;
				s = sqrt(p * (p - a) * (p - b) * (p - c));
				break;
			case 2:
				cout << "Введите по очереди две стороны и угол: " << endl;
				dvaiygol(&a,&b,&alfa);
				s = 0.5 * a * b * sin(acos(-1) * alfa / 180);
				break;
			case 3:
				cout << "Введите по очереди сторону и 2 угла: " << endl;
				cin >> a >> alfa >> beta;
				while (alfa <= 0 || alfa + beta > 180 || beta <= 0 || a <= 0)
				{
					cout << "Такого треугольника не существует, введите другую сторону и углы: " << endl;
					cin >> a >> alfa >> beta;
				}
				s = a * a * sin(acos(-1) * alfa / 180) * sin(acos(-1) * beta / 180) / (2 * sin(acos(-1) * (alfa + beta) / 180));
				break;
			case 4:
				cout << "Введите по очереди основание и высоту: " << endl;
				dva(&a,&b);
				s = 0.5 * a * b;
				break;
			case 5:
				cout << "Введите координату точки А(x1,y1,z1): " << endl;
				cin >> x1 >> y1 >> z1;
				cout << "Введите координату точки В(x2,y2,z2): " << endl;
				cin >> x2 >> y2 >> z2;
				cout << "Введите координату точки С(x3,y3,z3): " << endl;
				cin >> x3 >> y3 >> z3;
				a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
				b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2) + pow(z2 - z3, 2));
				c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2) + pow(z3 - z1, 2));
				while (a + b < c || a + c < b || b + c < a || a <= 0 || b <= 0 || c <= 0)
				{
					cout << "Такого треугольника не существует, введите другие координаты: " << endl;
					cout << "Введите x1,y1,z1: " << endl;
					cin >> x1 >> y1 >> z1;
					cout << "Введите x2,y2,z2: " << endl;
					cin >> x2 >> y2 >> z2;
					cout << "Введите x3,y3,z3: " << endl;
					cin >> x3 >> y3 >> z3;
					a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
					b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2) + pow(z2 - z3, 2));
					c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2) + pow(z3 - z1, 2));
				}
				p = (a + b + c) / 2;
				s = sqrt(p * (p - a) * (p - b) * (p - c));
				break;
			case 6:
				cout << "Введите координаты вектора АВ(x1,y1,z1): " << endl;
				cin >> x1 >> y1 >> z1;
				cout << "Введите координаты вектора ВС(x2,y2,z2): " << endl;
				cin >> x2 >> y2 >> z2;
				a = y1 * z2 - z1 * y2;
				b = x1 * z2 - z1 * x2;
				c = x1 * y2 - y1 * x2;
				p = sqrt(a * a + b * b + c * c);
				s = 0.5 * p;
				break;
			}
			break;
		case 2:
			cout << "Выберите способ расчета площади равнобедреннего треугольника: " << endl << "1-по стороне и основанию" << endl << "2-по высоте и основанию" << endl << "3-по равным сторонам и углу между ними" << endl << "4-по основанию и прилежащиму углу" << endl;
			three=proverka(1,4);
			switch (three)
			{
			case 1:
				cout << "Введите по очереди сторону и основание (сторона>основания): " << endl;
				cin >> b >> a;
				c = b;
				while (a + b < c || a + c < b || b + c < a || 4 * b * b - a * a <= 0 || a <= 0 || b <= 0 || c <= 0)
				{
					cout << "Такого треугольника не существует, введите другую сторону и основание: " << endl;
					cin >> b >> a;
					c = b;
				}
				s = (a / 4) * sqrt(4 * b * b - a * a);
				break;
			case 2:
				cout << "Введите по очереди сторону и высоту: " << endl;
				dva(&a,&b);
				s = 0.5 * a * b;
				break;
			case 3:
				cout << "Введите по очереди сторону и угол: " << endl;
				dvaiygol(&a,&b,&alfa);
				s = 0.5 * a * a * sin(acos(-1) * alfa / 180);
				break;
			case 4:
				cout << "Введите по очереди основание и прилижащий угол: " << endl;
				odiniygol(&a,&alfa,90);
				s = a * a / 4 * tan(acos(-1) * alfa / 180);
				break;
			}
			break;
		case 3:
			cout << "Выберите способ расчета площади прямоугольного треугольника: " << endl << "1-по 2-м катитам" << endl << "2-по гипотенузе и высоте" << endl << "3-по катету и гипотенузе" << endl << "4-по гипотенузе и прилежащиму углу" << endl << "5-по катету и прилежащиму углу" << endl << "6-по трем сторонам" << endl;
			three=proverka(1, 6);
			switch (three)
			{
			case 1:
				cout << "Введите 2 катета: " << endl;
				dva(&a,&b);
				s = 0.5 * a * b;
				break;
			case 2:
				cout << "Введите гипотенузу и высоту: " << endl;
				dva(&c,&a);
				s = 0.5 * c * a;
				break;
			case 3:
				cout << "Введите гипотенузу и катет: " << endl;
				dvaisrav(&c,&a,1);
				s = 0.5 * a * sqrt(c * c - a * a);
				break;
			case 4:
				cout << "Введите гипотенузу и прилежащий угол: " << endl;
				odiniygol(&c,&alfa,90);
				s = c * c / 4 * sin(acos(-1) * 2 * alfa / 180);
				break;
			case 5:
				cout << "Введите катет и прилежащий угол: " << endl;
				odiniygol(&c, &alfa, 90);
				s = 0.5 * a * a * tan(acos(-1) * alfa / 180);
				break;
			case 6:
				cout << "Введите по очереди стороны a,b,c: " << endl;
				tri(&a, &b, &c);
				p = (a + b + c) / 2;
				s = sqrt(p * (p - a) * (p - b) * (p - c));
				break;
			}
			break;
		case 4:
			cout << "Выберите способ расчета площади равностороннего треугольника: " << endl << "1-по стороне" << endl << "2-по высоте" << endl;
			three=proverka( 1, 2);
			switch (three)
			{
			case 1:
				cout << "Введите сторону равностороннего треугольника: " << endl;
				odin(&a);
				s = a * a * sqrt(3) / 4;
				break;
			case 2:
				cout << "Введите высоту равностороннего треугольника: " << endl;
				odin(&a);
				s = a *a / sqrt(3);
				break;
			}
			break;
		}
		break;
	case 2:
		cout << "Площадь чего именно вы хотите найти?" << endl << "1-круга" << endl << "2-круговой сектор" << endl << "3-круговой сегмент" << endl;
		two=proverka(1, 3);
		switch (two)
		{
		case 1:
			cout << "Выберите способ расчета площади круга: " << endl << "1-по радиусу" << endl << "2-по длине окружности" << endl;
			three=proverka( 1, 2);
			switch (three)
			{
			case 1:
				cout << "Введите радиус: " << endl;
				odin(&a);
				s = a * a * acos(-1);
				break;
			case 2:
				cout << "Введите длину окружности: " << endl;
				odin(&a);
				s = a * a / acos(-1) / 4;
				break;
			}
			break;
		case 2:
			cout << "Введите радиус и угол: " << endl;
			odiniygol(&a,&alfa,360);
			s = a * a * acos(-1) * alfa / 360;
			break;
		case 3:
			cout << "Выберите способ расчета площади кругового сегмент: " << endl << "1-по радиусу и углу" << endl << "2-по хорде и высоте" << endl << "3-по радису и высоте" << endl;
			three=proverka( 1, 3);
			switch (three)
			{
			case 1:
				cout << "Введите радиус и угол: " << endl;
				odiniygol(&a, &alfa, 360);
				break;
			case 2:
				cout << "Введите хорду и высоту: " << endl;
				dva(&c,&b);
				a = b / 2 + c * c / 8 / b;
				alfa = 2 * asin(c / 2 / a) * 180 / acos(-1);
				break;
			case 3:
				cout << "Введите радиус и высоту: " << endl;
				dvaisrav(&c, &a, 0.5);
				alfa = 2 * acos(1 - b / a) * 180 / acos(-1);
				break;
			}
			s = a * a * acos(-1) * alfa / 360;
			if (alfa > 180)
			{
				p = 0.5 * a * a * sin(acos(-1) * (360 - alfa) / 180);
				s += p;
			}
			else
			{
				p = 0.5 * a * a * sin(acos(-1) * alfa / 180);
				s -= p;
			}
		}
		break;
	case 3:
		cout << "Как вы хотите найти площадь?" << endl << "1-по стороне" << endl << "2-по диагонали" << endl;
		two=proverka(1, 2);
		switch (two)
		{
		case 1:
			cout << "Введите сторону: " << endl;
			odin(&a);
			s = a * a;
			break;
		case 2:
			cout << "Введите диагональ: " << endl;
			odin(&a);
			s = 0.5 * a * a;
			break;
		}
		break;
	case 4:
		cout << "Как вы хотите найти площадь?" << endl << "1-по двум сторонам" << endl << "2-по диагонали и углу между ними" << endl;
		two=proverka( 1, 2);
		switch (two)
		{
		case 1:
			cout << "Введите стороны: " << endl;
			dva(&a,&b);
			s = a * b;
			break;
		case 2:
			cout << "Введите диагональ и угол между ними: " << endl;
			odiniygol(&a,&alfa,180);
			s = a * a * sin(acos(-1) * alfa / 180) / 2;
			break;
		}
		break;
	case 5:
		cout << "Как вы хотите найти площадь?" << endl << "1-по стороне и углу между ними" << endl << "2-по стороне и высоте" << endl << "3-по двум диагоналям" << endl;
		two=proverka( 1, 3);
		switch (two)
		{
		case 1:
			cout << "Введите сторону и угл между ними: " << endl;
			odiniygol(&a, &alfa,180);
			s = a * a * sin(acos(-1) * alfa / 180);
			break;
		case 2:
			cout << "Введите сторону и высоту: " << endl;
			dvaisrav(&c, &a, 1);
			s = a * b;
			break;
		case 3:
			cout << "Введите две диагонали: " << endl;
			dva(&a,&b);
			s = 0.5 * a * b;
			break;
		}
		break;
	case 6:
		cout << "Как вы хотите найти площадь?" << endl << "1-через основания и высоту" << endl << "2-через среднюю линию и высоту" << endl << "3-через диагонали и угл между ними" << endl << "4-через среднюю линию, боковую сторону и угол при основании" << endl << "5-через радиус вписанной окружности и угол при основании" << endl;
		two=proverka(1, 5);
		switch (two)
		{
		case 1:
			cout << "Введите два основания и высоту: " << endl;
			cin >> a >> b >> p;
			while (a <= 0 || b <= 0 || p <= 0)
			{
				cout << "Такой трапеции не существует, введите другие основания и высоту: " << endl;
				cin >> a >> b >> p;
			}
			s = 0.5 * (a + b) * p;
			break;
		case 2:
			cout << "Введите среднюю линию и высоту: " << endl;
			dva(&a,&b);
			s = a * b;
			break;
		case 3:
			cout << "Введите диагонали и угл между ними: " << endl;
			dvaiygol(&a,&b,&alfa);
			s = 0.5 * a * b * sin(acos(-1) * alfa / 180);
			break;
		case 4:
			cout << "Введите среднюю линию, боковую сторону и угол при основаниии: " << endl;
			dvaiygol(&a, &b, &alfa);
			s = a * b * sin(acos(-1) * alfa / 180);
			break;
		case 5:
			cout << "Введите радиус и угол при основании: " << endl;
			odiniygol(&a, &alfa,180);
			s = 4 * a * a / sin(acos(-1) * alfa / 180);
			break;
		}
		break;
	case 7:
		cout << "Введите две полуоси овала: " << endl;
		dva(&a,&b);
		s = a * b * acos(-1);
		break;
	case 8:
		cout << "Как вы хотите найти площадь?" << endl << "1-по сторонам и углу между ними" << endl << "2-по стороне и высоте" << endl << "3-по двум диагоналям и углу между ними" << endl;
		two=proverka( 1, 3);
		switch (two)
		{
		case 1:
			cout << "Введите стороны и угл между ними: " << endl;
			dvaiygol(&a,&b,&alfa);
			s = a * b * sin(acos(-1) * alfa / 180);
			break;
		case 2:
			cout << "Введите сторону и высоту: " << endl;
			dva(&a,&b);
			s = a * b;
			break;
		case 3:
			cout << "Введите две диагонали и угол между ними: " << endl;
			dvaiygol(&a, &b, &alfa);
			s = 0.5 * a * b * sin(acos(-1) * alfa / 180);
			break;
		}
		break;
	case 9:
		cout << "Как вы хотите найти площадь?" << endl << "1-по стороне" << endl << "2-по радиусу вписанной окружности" << endl << "3-по радиусу описанной окружности" << endl;
		two= proverka(1, 3);
		cout << "Введите сколько сторон у многоульника: ";
		cin >> b;
		while (b<3)
		{
			cout << "Введите число большее трех, другие цифры не подходят: " << endl;
			cin >> b;
		}
		switch (two)
		{
		case 1:
			cout << "Введите длину стороны н-угольника: ";
			odin(&a);
			s = a * a * b / (4 * tan(acos(-1) / b));
			break;
		case 2:
			cout << "Введите длину радиуса вписанной окружности: ";
			odin(&a);
			s = a * a * b * tan(acos(-1) / b);
			break;
		case 3:
			cout << "Введите длину радиуса описанной окружности: ";
			odin(&a);
			s = 0.5 * a * a * b * sin(acos(-1) * 2 / b);
			break;
		}
		break;
	}
	cout << "Площадь вашей фигуры равна: " << s;
	cin.get();
	cin.get();
}