#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <cmath>

using namespace std;

/**
*\brief функция выводит результат вычислений на экран и исходные данные
*\return 0 в случае успеха
*/
int main() 
{
    float a, b, c;
    std::cin >> a >> b >> c;
    if (a >= 0)
    {
        a = pow(a, 3);
    }
    else
    {
        a = pow(a, 4);
    }
    if (b >= 0)
    {
        b = pow(b, 3);
    }
    else
    {
        b = pow(b, 4);
    }
    if (c >= 0)
    {
        c = pow(c, 3);
    }
    else
    {
        c = pow(c, 4);
    }
    std::cout << a << " " << b << " " << c;
}
