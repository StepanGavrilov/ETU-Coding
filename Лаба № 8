#include "integral.h"
#include <cmath>


using namespace std;

double IntegralFunction(double E, double A, double B, double fromintegal(double)) {
	double integral;
	double counter;
	double Su;
	double S = 0;
	int non = 2;

	bool checker = true;
	while (checker == true) {
		counter = (B - A) / non;
		Su = S;
		
		for (int i = 0; i < non; i++) {
			S = S + fromintegal(A + i * counter);

		}
		S = counter * (S + (fromintegal(A) + fromintegal(B)) / 2);
		non = non * 2;


		if (abs(Su - S) > E) {
			continue;
		}
	}

	return S;
}
