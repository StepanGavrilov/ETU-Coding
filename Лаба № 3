#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

const char line = '\n';

//cheker numbers;;
int checker()
{
	int var_to_input = 0;
	char c;
	c = _getch();
	while (c != 13) {
		c = _getch();
		if ((c >= '0') && (c <= '9')) {
			cout << c;
			var_to_input = var_to_input * 10 + c - '0';
		}
	}
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



int main()
{
	setlocale(LC_ALL, "Rus");
	
	cout << "Начать выполнение программы ? (+/-)" << line;
	char start;
	cin >> start;

	switch (start)
	{
	case '+':
		bool attemp1 = true;
		while (attemp1 == true) {
			
			double x, e;
			double k, N, s, S;

			// check var
			bool attemp2 = true;
			while (attemp2 == true) {
				cout << " Введите значения Х " << line;
				cout << " -1 < X < 2 " << line;
				x = OnlyDouble();
				if ((x > 2) || (x < -1)) {
					cout << "Введены некоректные данные:  " << x << line;
					continue; 

				}
				else {
					cout << "Данные введены без ошибок " << line;
					attemp2 = false;
					cout << line;
					cout << line;
				} 
			}
	
			bool attemp3 = true;
			while (attemp3 == true)
			{
				cout << "Введите значение e" << line;
				cout << "Значние должно быть положительно " << line;
				cout << line;

				e = OnlyDouble();
				if (e >= 0) {
					cout << e << line;
					
					cout << " Данные введены корректно " << line;
					cout << line;
					attemp3 = false;	

				}
				else {
					cout << e << line;
					cout << " Неправильный ввод данных " << line;
					cout << line;
					continue;
				}
			}
			// check var

			N = 3;
			k = x * x / 2;
			s = 0;
			
			do
			{
				s = s + k;
				k = k * -x * (N - 1) / N;
			} while (abs(k) > e);

			S = 1 / (x + 1) * (x + s);
			cout << line;
			cout << line;
			cout <<" Сумма: "<< s << line;
			cout <<" Количетсво членов: " <<N << line;
			cout <<" Величина ошибки составляет: " << abs(log(x + 1) - s) << line;
			cout << " Хотите ввести данные ещё раз? (+/-)" << line;
			cout << line;
			cout << line;
			char repeat;
			cin >> repeat;
			if (repeat == '+') {
				continue;
			}
			else {
				attemp1 = false;
			}
		}
		break;
	}
	cout << "Программа завершенна" << line;
	
	
}

