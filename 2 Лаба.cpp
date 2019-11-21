#include <iostream>;
#include <cmath>
#include <conio.h>

using namespace std;

double Rdouble()
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
		if ((c >= '0') && (c <= '9'))
		{
			cout << c;
			if (Real == 0) n = n * 10 + c - '0';
			else n = n + (c - '0') * (m *= 0.1);
		}
		if ((Real == 0) && (c == '.'))
		{
			cout << c;
			Real = 1;
		}
	} while (c != 13);
	return n;
}

int main() {


	setlocale(LC_ALL, "Rus");


	double X_max;
	double X_zero;
	double Dx;


	do
	{
		cout << "\n""Введите x нулевое :  " << endl;
		X_zero = Rdouble();

	} while (X_zero <= 0.5 || X_zero >= 1);

	do
	{
		cout << "\n""Введите Dx :  " << endl;
		Dx = Rdouble();

	} while (Dx <= 0);

	do
	{
		cout << "\n""Введите х максимальное :  " << endl;
		X_max = Rdouble();

	} while ((X_zero >= X_max) || (X_max >= 1));



	for (; X_zero < X_max; X_zero += Dx)
	{
		
		cout << "\n" <<X_zero << endl;
		cout << (1 / (X_zero * X_zero)) << endl;
	}

















	return 0;
}