#pragma once

#include <cmath>


using namespace std;

double IntegralFunction(double E, double A, double B, double fromintegal(double)) {
	// E - эпсилон А - Начальная граница В - конечная граница FromItegral - задаваемая функция


	double integral; // Функция
	double counter; // Количество разбиений 
	double Su; // Начальная площадь трапеции
	double S = 0; // Последущие площади трапеции
	int non = 2; // Количество разбиений

	
	do 
	{
		counter = (B - A) / non;
		Su = S;

		for (int i = 0; i < non; i++) {
			S = S + fromintegal(A + i * counter);

		}
		S = counter * (S + (fromintegal(A) + fromintegal(B)) / 2);
		non = non * 2;


		
	}while (abs(Su - S) > E);
	

	return S;
}
