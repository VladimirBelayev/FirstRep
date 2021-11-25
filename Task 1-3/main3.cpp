#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief функция вычисляет сопротивление
*\param R параметр сопротивления R
*\return 0 в случае успеха
*/
double getR(double R1,double R2, double R3);

/**
*\brief функция выводит результат вычислений на экран
*\return 0 в случае успеха
*/
int main()
{
    double R1, R2, R3;
    cout << "Введите первое сопротивление\n";
    cin >> R1;
    cout << "Введите второе сопротивление\n";
    cin >> R2;
    cout << "Введите третье сопротивление\n";
    cin >> R3;
    const double R = getR(R1,R2,R3);

    cout << "R =" << R;
    return 0;
}
double getR(double R1, double R2, double R3) {
    return (R1 * R2 * R3) / (R1 + R2 + R3);
}