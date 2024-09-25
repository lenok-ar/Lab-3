/***********************************
 * Автор:    Арестова Е.Е.         *
 * Дата:     25.09.2024            *
 * Название: Циклы с ветвлением    *
 * Вариант:  2                     *
 ***********************************/

#include <iostream> 
#define _USE_MATH_DEFINES 
#include <math.h> 
#include <cmath> 
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	double C[]{ 8, 7.5, 7, 6, 4, 2 };
	double D = 6.3 * pow(10, (-5));
	double h = 2.5;
	double C0 = 8.2;
	double Cr = 1.7;
	double t, i;

	for (size_t a = 0; a < size(C); a++) {

		t = (sqrt(2.00) / M_PI) * ((C0 - Cr) / (C0 - C[a]));

		if (t > 2) {
			i = sqrt(2.00) * ((D * t) / pow(h, 2)) * (C0 - Cr);

			cout.precision(6);
			cout.setf(ios::fixed);
			cout << "Значение i = " << i << "; " << "t = " << t << endl;
		}
		else {
			i = 0.25 * ((D * pow(M_PI, 2)) / pow(h, 2)) * (C0 - Cr);

			cout.precision(6);
			cout.setf(ios::fixed);
			cout << "Значение i = " << i << "; " << "t = " << t << endl;
		}
	}
}