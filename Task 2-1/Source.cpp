#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief функция вычисляет площадь трапеции SquareTrapezoid
*\param a первое основание
*\param b второе основание
*\param h высота трапеции
*\return 0 в случае успеха
*/
double getSquareTrapezoid(const double h, const double a, const double b);

/**
*\brief функция вычисляет площадь круга SquareCircle
*\param r радиус круга
*\return 0 в случае успеха
*/
double getSquareCircle(const double r);

/**
*\brief Выбор расчёта площади трапеции(0) или круга(1)
*\return 0 в случае успеха
*/

enum class ActionChoice { TrapezoidSquare, CircleSquare };

int main()
{
    setlocale(LC_ALL, "Russian");

    double a;
    cout << "Введите первое основание трапеции\n";
    cin >> a;

    double b;
    cout << "Введите второе основание\n";
    cin >> b;

    double h;
    cout << "Введите высоту трапеции\n";
    cin >> h;

    double r;
    cout << "Введите радиус круга\n";
    cin >> r;

    cout << "Введите выполняемое действие (Площадь трапеции = " << static_cast<int>(ActionChoice::TrapezoidSquare) << ", площадь круга = " << static_cast<int>(ActionChoice::CircleSquare) << ") ";
    int input;
    cin >> input;

    const auto choice = static_cast<ActionChoice>(input);

    switch (choice)
    {
    case ActionChoice::TrapezoidSquare:
    {
        const auto Tsquare = getSquareTrapezoid(h, a, b);
        cout << "Площадь трапеции = " << Tsquare;
        break;
    }
    case ActionChoice::CircleSquare:
    {
        const auto Csquare = getSquareCircle(r);
        cout << "Площадь круга = " << Csquare;
        break;
    }
    }
    cout << endl;
    return 0;
}

double getSquareTrapezoid(const double h, const double a, const double b)
{
    return (h * (a + b)) / 2;
}

double getSquareCircle(double r)
{
    return M_PI * pow(r, 2);
}
