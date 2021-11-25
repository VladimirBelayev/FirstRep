#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief функция вычисляет A
*\param x параметр x
*\return 0 в случае успеха
*/
double getA(const double x);

/**
*\brief функция вычисляет B
*\param x параметр x
*\param y параметр y
*\return 0 в случае успеха
*/
double getB(const double x, const double y);

/**
*\brief функция выводит результат вычислений на экран и исходные данные
*\return 0 в случае успеха
*/
int main() {
	const double x=0.335;
	const double y=0.025; 

	const double A = getA(x);
	const double B = getB(x,y);

	cout << "x=" << x << " y=" << y << " A=" << A << "  B=" << B;
	return 0;
}

double  getA(const double x)
{
	return (1 + x +((pow(x, 2)) / 2) + ((pow(x, 3)) / 3) + ((pow(x, 4)) / 4));
}

double getB(const double x,const double y)
{
	return x * (sin(pow(x, 3)) + pow(cos(y),2));
}
   