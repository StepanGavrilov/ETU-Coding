#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int rows = 4;   // строки матрицы
	int colum = 4;  // столбцы матрицы


	int **arr = new int* [rows]; // создание массива указателей

	for (int i = 0; i < rows; i++) // создание массива2
	{
		arr[i] = new int[colum];
	}

	// ввод - вывод

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

	cout << "Первоначальный массив" << "\t" "\n\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[i][j] << "\t";
			
		}
		
		cout << endl;
	}


	// смена блоков
	
	for (int i = 0; i < rows; i++)
	{
		

		for (int j = 0; j < rows; j++)
		{
			swap(arr[i][0], arr[0][j]);
			swap(arr[i][j], arr[0][j]);

		}

		cout << endl;
	}
	
	cout << "\n\n""Изменённый массив" << "\t" "\n\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[i][j] << "\t";

		}

		cout << endl;
	}

	
	
	
	
	
	
	
	
	
	
	
	
	// очистка памяти
	
	for (int i = 0; i < rows; i++)
	{
		delete [] arr[i];
	}

	delete[] arr;


	

























































































	return 0;
}