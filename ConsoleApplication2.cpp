
#include <iostream>
#include <conio.h>

using namespace std;

int RInt()                                            //Ввод целого не отрицательного числа
{
	int n = 0;
	char c;
	do
	{
		c = _getch();

		if ((c >= '0') && (c <= '9'))
		{
			cout << c;
			n = n * 10 + c - '0';
		}
	} while (c != 13);
	cout << endl;
	return n;
}

double RdoubleSign()                                 //Ввод вещественного числа
{
	double n = 0;
	char c;
	int i = 0;
	int zn = 1;
	bool Real = 0;
	double m = 1;
	do
	{
		c = _getch();
		if (((c >= '0') && (c <= '9')) || (c == '+') || (c == '-'))
		{
			if ((Real == 0) && (c != '-') && (c != '+'))
				n = n * 10 + c - '0';
			else
				if (((c == '+') || (c == '-')) && (i++ == 0))
				{
					if (c == '-') zn = -zn;
				}
				else
				{
					n = n + (c - '0') * (m *= 0.1);
				}
			cout << c;
		}
		if ((Real == 0) && (c == '.'))
		{
			cout << c;
			Real = 1;
		}
	} while (c != 13);
	cout << endl;
	return n *= zn;
}

bool contwork()
{
	cout << "Ввести значения заново?(Y/N)\n";
	char c;
	cin >> c;
	return (c == 'y') || (c == 'Y');
}

int main()
{
	int k, N;
	double x, u[2];
	setlocale(LC_CTYPE, "rus");
	do
	{
		k = -1;
		cout << "Введите значения N и x, при том что |x|<2";
		do
		{
			cout << endl << "Введите значение \"степени N\"" << endl;
			N = RInt();
		} while (N < 2);
		do
		{
			cout << "Введите значение x" << endl;
			x = RdoubleSign();
		} while (/*abs(x) >= 1*/0);
		u[0] = 2;
		u[1] = x;
		while (++k < N)
			u[k & 1] =  x * u[(k + 1) & 1] - u[k & 1];
		cout << "Функция равна == " << u[(k - 1) & 1] << endl;
	} while (contwork());
}