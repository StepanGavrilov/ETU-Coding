﻿#include <iostream>
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
double Function(double x, int n)
{
	double u0 = 2, u1 = x, u = 0;
	for (int i = 3; i < n; i++)
	{
		u = x * ( u1 + 1 / i * u0);
		u0 = u1;
		
	}
	return u;
}
// main func


int main()
{
	bool attemp1 = true;
	while (attemp1 == true) {
		double x;
		x = Function(0.235, 1.4);
		cout << x << endl;
		cout << "" << endl;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		// continue
		char repeat;
		cout << "Хотите ещё раз ввести данныее ? (+/-)" << line;
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

