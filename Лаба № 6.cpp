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


// main func
double Function(double X, int N)
{
	double u0 = 1;
	double u1 = 2*X;
	double u = 0;
	double rez;

	switch (N) {
	case 0:
		return 2;
	case 1:
		return X;
	default:
		rez = 2*X * Function(X, N - 1) - Function(X, N - 2);
		return rez;

	}
}
// main func


int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	int X;

	bool attemp1 = true;
	while (attemp1 == true) {
		
		cout << "Введите значение степени N: " << line;
		int N;
		N = checker();
		cout << line;
		
		bool attemp_x= true;

		while (attemp_x == true) {
			// check variables
			cout << "Введите значение X: |x| < 1 " << line;
			double X;		
			X = OnlyDouble();
			if ((X > -1) && (X < 1)) {
				cout << "Вы ввели X: " << X <<line;
				cout << "Значение подходит под область" << line;
				attemp_x = false;
			}
			else {
				cout << "Вы ввели X: " << X << line;
				cout << "Значение не подходит по область" << line;
				continue;
			}
			// check variables
			
			// main
			double rezult;
		 	rezult = Function(X, N);
			cout << "Результат вычислений: " << rezult <<line;
			// main
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		// continue
		char repeat;
		cout << "Хотите ещё раз ввести данные ? (+/-)" << line;
		cin >> repeat;
		if (repeat == '+') {
			continue;
		}
		else {
			attemp1 = false;
		}
		// continue
	}

	


}

