#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;
/**
*\brief функция вычисляет y при x < 1.2
*\param a параметр a
*\param x параметр x
*\return 0 в случае успеха
*/
double getY1(const double x, const double a);

/**
*\brief функция вычисляет y при x >= 1.2
*\param a параметр a
*\param x параметр x
*\return 0 в случае успеха
*/
double getY2(const double x, const double a);

int main() {
	const double a = 2.8;
	double x;
	cout << "Введите параметр x\n";
	cin >> x;
	if (x < 1.2) {
		const double y = getY1(x, a);
		cout << "y = " << y;
	}
	else {
		const double y = getY2(x, a);
		cout << "y = " << y;
	}
	return 0;
}

double getY1(const double x, const double a) {
	return a * pow(x, 2) + 4;
}
double getY2(const double x, const double a) {
	return (a + 4 * x) * sqrt(pow(x, a * 2));
}