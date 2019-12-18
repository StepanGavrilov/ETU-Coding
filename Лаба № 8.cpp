#include <iostream>
#include "INTEGRAL.h"
#include <conio.h>
const char LINE = '\n';
using namespace std;

const char line = '\n';



//cheker numbers;;
int checker()
{
	int var_to_input = 0;
	char c;
	do
	{
		c = _getch();
		if ((c >= '0') && (c <= '9'))
		{
			cout << c;
			var_to_input = var_to_input * 10 + c - '0';
		}

	} while (c != 13);
	cout << line;
	return var_to_input;
}
// only float;;
double OnlyDouble()
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
	cout << line;
	return n;
}
// input to integral
double fromintegal(double x) 
{
	// x - input function
	return x * x * x;
}

bool contwork()
{
	cout <<"Вы хотите повторить?(y/n)\n"<<LINE;
	char c;
	cin >> c;
	c = toupper(c);
	return (c == 'Y');
}


int main()
{
	setlocale(LC_ALL, "Rus");
	double E, A, B;
	 /*E - эпсилон А - Начальная граница В - конечная граница */

	do 
	{
		do
		{
			cout << "Введите Эпсилон (точность вычисления)" << LINE;
			cout << "Значение полжно быть : 0.0000000001 - 0.1" << LINE;
			E = OnlyDouble();
			cout << "Вы ввели: " << E << LINE;
			cout << LINE;
		} while ((E > 0.1) || (E < 0.0000000001));

		cout << "Значение введенно верно! Вы ввели: " << E << LINE;
		cout << LINE;

		cout << "Введите нижний предел." << LINE;
		A = OnlyDouble();
		cout << "Вы ввели: " << A << LINE;
		cout << LINE;

		do
		{
			cout << "Введите верхний предел, он должен быть больше чем: " << A << LINE;
			B = OnlyDouble();
			cout << "Вы ввели: " << B << LINE;
			cout << LINE;
		} while (A > B);
		cout << "Полученный интеграл: " << IntegralFunction(E, A, B, fromintegal) << LINE;
		
		
		

	} while (contwork());
	
    







}

 
