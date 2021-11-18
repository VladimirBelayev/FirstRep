#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

/**
Многострочный коментарий
*/
using namespace std;

/**
*\brief функция вычисляет площадь трапеции ST
*\param a первое основание
*\param b второе основание
*\param h высота трапеции
*\return 0 в случае успеха
*/
double getST(double h,double a,double b);

/**
*\brief функция вычисляет площадь круга SK
*\param R радиус круга
*\param M_PI число пи
*\return 0 в случае успеха
*/
double getSK(double R);

/**
*\brief функция выводит результат вычислений на экран
*\return 0 в случае успеха
*/
int main()
{
    double a;
    double b;
    double h;
    double R;
    cout << "Введите первое основание\n";
    cin >> a;
    cout << "Введите второе основание\n";
    cin >> b;
    cout << "Введите высоту трапеции\n";
    cin >> h;
    cout << "Введите радиус круга\n";
    cin >> R;
    const double ST = getST(a,b,h);
    const double SK = getSK(R);

    cout << "ST==" << ST << "  SK==" << SK;
    return 0;
}

double getST(double h, double a, double b)
{
    return 0, 5 * h * (a + b);
}

double getSK(double R)
{
    return M_PI * pow(R, 2);
}