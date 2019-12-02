#include <iostream>
#include <conio.h>


using namespace std;


bool ContWork()
{
	cout << "Продолжим?(Y/N)";
	char c;
	cin >> c;
	return (c == 'y') || (c == 'Y');
}


int main()
{
	setlocale(0, "");
	char x, t[51][10];
	int num, i;
	bool real;

	do
	{
		real = 1;
		num = 1;
		i = 0;
		cout << "Введите строку: " << endl << endl;
		do
		{
			x = _getch();

			if (((x >= '0') && (x <= '9') || (x >= 'a') && (x <= 'z') || (x >= 'A') && (x <= 'Z') || (x == '.') || (x == ' ')) && (num < 50))
			{

				if ((i < 10) && (x != ' '))
				{

					cout << x;
					if (real == 1)
					{
						real = 0;

						if ((x >= 65) && (x <= 90))
						{
							x += 32;
						}

					}

					t[num][i] = x;
					i++;

				}

				if (x == ' ')
				{
					t[num][i] = '\0';
					i = 0;
					cout << ' ';

					if (real == 0)
					{
						real = 1;
						num++;
					}
				}
			}

			t[num][i] = '\0';

		} while (x != '.');

		cout << endl;

		for (int a = 1; a < num + 1; a++)
		{
			cout << "\n" <<t[a] << " ";
		}

		cout << endl << endl;

	} while (ContWork());
	return 0;
}