#include <iostream>
#include <string>
#include <vector> // массив
#include <map>  // словарь

using namespace std;


// Глобальные переменные, всегда задаются до главной функции Main.
int gl_0 = 5;

struct Person
{
	string name;
	string surname;
	int age;
};

int main()
{
	setlocale(LC_CTYPE, "Russian");


    // Типы переменных
	// C++ - статическая типизация

	short int ap_1 = 1;
	unsigned short int	ap_1_2 = 2;
	unsigned int ap_1_3 = 3;
	long int ap_2 = 4;
	unsigned long int ap_2_1 = 5;
	long long int ap_3 = 6;
	unsigned long long int ap_4 = 7;
	float ap_5 = 8;
	double ap_6 = 9;
	long double ap_7 = 10;
	char ap_8 = 'a';
	const int ap_9 = 11;
	
	
	cout << "Short int (-32768 - 32767) : " << ap_1 << endl;
	cout << "Unsigned Short int (65535) : " << ap_1_2 << endl;
	cout << "Unsigned int (4 bil) : " << ap_1_2 << endl;
	cout << "Long int (-2 bil - 2 bil) : " << ap_2 << endl;
	cout << "Long int (4bil = Unsigned int) : " << ap_2_1 << endl;
	cout << "Long long int (over) : " << ap_3 << endl;
	cout << "Unsigned Long long int (18 bil) : " << ap_4 << endl;
	cout << "Float  : " << ap_5 << endl;
	cout << "Double (Updated Float)  : " << ap_6 << endl;
	cout << "Long Double (Updated Double)  : " << ap_7 << endl;
	cout << "Char  : " << ap_8 << endl;
	cout << "Const var :" << ap_9 << endl;
	cout << endl;

	
	// Операции
	

	int a = 12;
	int b = 10;
	int c1, c2, c3, c4, c1_1, c2_1;

	cout << "A equals: " << a << endl;
	a++;
	cout << "Постфиксный инкремент: " << a << endl;
	c1_1 = ++a;
	cout << "Префиксный инкремент: " << a << endl;
	--a;
	cout << "Префиксный декремент: " << a << endl;
	a--;
	cout << "Постфиксный декремент: " << a << endl;
	c3 = -a;
	cout << "Унарный минус: " << c3 << endl;
	c4 = +a;
	cout << "Унарный плюс: " << c4 << endl;
	c1_1 = pow(a, 2);
	cout <<"Возведение в степень: "<< c1_1 << endl;
	cout << endl;
	
	
	// Побитовые операции


	unsigned char ap1_10 = 255;
	unsigned char ap1_11 = ~ap1_10;
	int ap1_10_0 = ap1_10;
	int ap1_10_1 = ap1_11;
	cout << "До побитовой операции НЕ " << ap1_10_0 << endl;
	cout << "Побитовая операция НЕ " << ap1_10_1 << endl;

	unsigned char ap1_13 = 4;
	unsigned char ap1_14 = 5;
	int ap1_15 = ap1_13 & ap1_14;
	int ap1_16 = ap1_13 | ap1_14;
	int ap1_17 = ap1_13 ^ ap1_14;
	int ap1_18 = ap1_13 >> 1;
	int ap1_19 = ap1_14 << 1;
	cout <<"Побитовое И : "<< ap1_15 << endl;
	cout << "Побитовое ИЛИ : " << ap1_16 << endl;
	cout << "Побитовое ИСКЛЮЧАЮЩИЕ ИЛИ : " << ap1_17 << endl;
	cout << "Побитововый СДВИГ ВПРАВО : " << ap1_18 << endl;
	cout << "Побитововый СДВИГ ВЛЕВО : " << ap1_19 << endl;
	cout << endl;


	// Автоматическое задавание типа


	auto x = 1;
	cout <<"Автоматическая перменная: "<<x << endl;
	cout <<"Размер auto: " << sizeof(x) << endl;
	cout <<"Тип auto: " << typeid(x).name() << endl;
	cout << endl;


	// Константы


	int apol_0 = 5;
	cout <<"Литеральная константа: " << apol_0 << endl;
	const int apol_1 = 15;
	cout << "Константа с CONST: " << apol_1 << endl;
	constexpr float apol_2 = 3 / 2;
	cout << "Константное выражение с CONSTEXPR: " << apol_2 << endl;
	enum colors {
		Black = 21,
		White,
		Red
	};
	colors named = Black;
	cout <<"Перечисляемые константы: "<<named << endl;
	cout << "Перечисляемые константы: " << Black << endl;
	cout << "Перечисляемые константы: " << White << endl;
	cout << "Перечисляемые константы: " << Red << endl;
	cout << endl;


	// Массивы


	int array_0[5] = { 0 };
	int array_1[5];
	const int n = 5;
	int array_2[n] = { 1,2,3,4,5 };
	array_2[0] = 10;

	cout << "Итерация по массиву: " << endl;
	for (int i = 0; i < n; i++) {
		cout << array_2[i] << "|";
	}
	cout << endl;

	// Многомерные массивы - матрицы
	cout << "Многомерные массивы" << endl;
	int matrix_0[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int k = 0; k < 3; k++) {
			cout << matrix_0[i][k] << " ";
		}
	}

	cout <<"\n"<<endl;


    // Строки
	
	
	string Greetings("Hello User, its C++");
	cout << "String: " << Greetings << endl;
	string input_0;
	cout << "Input with getline: ";
	getline(cin, input_0);
	cout << "Input with getline: " << input_0 << endl;


	// switch
	cout << "\n" << endl;
	auto sw = 0;
	cout << "Enter SW: " << endl;
	cin >> sw;
	switch (sw)
	{
	case 1:
		cout << "case1" << endl;
		break;
	case 2:
		cout << "case2" << endl;
		break;
	case 3:
		cout << "case3" << endl;
		break;
	default:
		cout << "default" << endl;
		break;
	}


	// Троичный оператор

	int apolo_0 = 123;
	int apolo_1 = 321;
	int apolo_max = (apolo_0 < apolo_1) ? apolo_0 : apolo_1;
	cout <<"Троичный оператор выбора: "<< apolo_max << endl;
	cout << endl;



	//Циклы
	cout << "Циклы << endl" << endl;
	auto i = 0;
	while (i != 11) {
		cout << "Раз :" << i << endl;
		i++;
	}
	cout << "Do While" << endl;
	auto k = 0;
	do {
		cin >> k;
		cout << "repeat: " << k << endl;
	} while (k != 5); {
		cout << "Finish" << endl;
	}
	cout << endl;

	
	// Бесонечный цикл for
	
	cout <<"Бесонечный цикл for"<<endl;
	for (;;) {
		int x, y;
		cout << "Введите X: " << endl;
		cin >> x;
		cout << "Введите Y: " << endl;
		cin >> y;
		cout << "Хотите поменяь значения? (+/-)" << endl;
		char z;
		cin >> z;
		if (z == '+'){
			continue;
		}
		break;
	}



	/*
	string x_5 = "Hello World its c++!";
	
	// вектор-список
	vector<int> nums = { 1,2,3,4,5 };

	// словарь
	map<string, int > dict;
	dict["one"] = 1;
	dict["two"] = 2;
	dict["three"] = 3;
	
	
	// ооп
	vector<Person> staff;
	staff.push_back({ "Ivan","Ivanov",15 });
	cout << "Person is: " << staff[0].name << endl; // вывод инфы


	// контейнеры
	string str_1 = "Hello World Its C++";
	for (char i : str_1) {
		cout << i << " ";

	}
	*/

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
