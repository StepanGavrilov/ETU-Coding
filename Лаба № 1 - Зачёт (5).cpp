#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	system("color 0C");
			
	double x, y;

	while (true)
	{
		//
		cout << "Начать вводить координаты?(+/-): ";
		char requests;
		cin >> requests;
		if (requests == '+') 
		{
			cout << "Пожалуйста введите координату точки X" << endl;
			cin >> x;
			cout << "Пожалуйста введите координату точки Y" << endl;
			cin >> y;
			cout << "Координата точки Х=" << x << " " << "Координата точки Y= " << y << endl;


			if (x == 0 and y == 0) {
				cout << "Точка лежит в начаое координат" << endl;
			}else 
				if (x > 0 and y > 0 ) {
					cout << "Точка лежит в первой четверти" << endl;
			}	else 
					if (x < 0 and y > 0  ) {
				cout << "Точка лежит в второй четверти" << endl;
			}else if (x < 0 and y < 0 ) {
				cout << "Точка лежит в третьей четверти" << endl;
			}else if (x > 0 and y < 0 ) {
				cout << "Точка лежит в четвёртой четверти" << endl;
			}


				if (y == 0 ) {
				cout << "Точка лежить на оси Y " << endl;

			}else if(x ==0 ){
				cout << "Точка лежит на оси X" << endl;
			}

		}
		else {
			return 0;
		}

	}
}
