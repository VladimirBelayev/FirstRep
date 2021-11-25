#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief функция вычисляет объём шара
*\param radius радиус шара
*\return 0 в случае успеха
*/
double getVolume(const double radius);

/**
*\brief функция вычисляет площадь поверхности шара
*\param radius радиус шара
*\return 0 в случае успеха
*/
double getSquare(const double radius);

/**
*\brief функция выводит результат вычислений на экран
*\return 0 в случае успеха
*/
int main()
{
    double radius;
    cout << "Введите радиус шара\n";
    cin >> radius;
    const double volume = getVolume(radius);
    const double square = getSquare(radius);

    cout << "S=" << square << "  V=" << volume;
    return 0;
}

double getVolume(const double radius)
{
    return 4 * ((M_PI * pow(radius, 3) / 3));
}

double getSquare(const double radius)
{
    return 4 * (M_PI * pow(radius, 2));
}
