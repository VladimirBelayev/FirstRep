#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

/**
 * \brief Функция находит факториал k
 * \param n Входной параметр
 * \return F-искомый факториал
 */
int factorial(int n)
{
	int F = 1;
	if (n == 0) {
		return F;
	}
	else {
		for (int i = 1; i <= n; ++i)
		{
			F *= i;
		}
	}
	return F;
}

/**
 * \brief Функция находит сумму n членов заданной последовательности
 * \param n - количество членов последовательности
 * \param k - параметр нахождения членов последовательности
 * \param sum - искомая сумма
 * \return 0 в случае успеха
 */
int main()
{
	double k = 0;
	double sum = 0;
	int n;
	int fact;
	cout << "Сколько членов последовательности сложить?\n";
	cin >> n;
	while (k < n) {
		sum = sum + pow(-1, k) / factorial(n);
		k = k + 1;
	}
	cout << "Сумма = " << sum;
	return 0;
}

