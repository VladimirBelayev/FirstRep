#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

/**
Многострочный коментарий
*/
using namespace std;

/**
*\brief функция вычисляет объём шара
*\param R параметр R
*\param M_PI число пи
*\return 0 в случае успеха
*/
double getV(double R);

/**
*\brief функция вычисляет площадь поверхности шара
*\param R параметр R
*\param M_PI число пи
*\return 0 в случае успеха
*/
double getS(double R);

/**
*\brief функция выводит результат вычислений на экран
*\return 0 в случае успеха
*/
int main()
{
    double R;
    cout << "Введите радиус шара\n";
    cin >> R;
    const double V = getV(R);
    const double S = getS(R);

    cout << "S==" << S << "  V==" << V;
    return 0;
}

double getV(double R)
{
    return 4 * ((M_PI * pow(R, 3) / 3));
}

double getS(double R)
{
    return 4 * (M_PI * pow(R, 2));
}
