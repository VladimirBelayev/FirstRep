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
 * \brief Функция находит сумму членов  последовательности > e
 * \param n - член поледовательности
 * \param k - параметр нахождения членов последовательности
 * \param e - параметр условие
 * \param sum - искомая сумма
 * \return 0 в случае успеха
 */
int main()
{
	double k = 0;
	double e;
	double n = 100000;
	double sum = 0;
	int fact;
	cout << "Введите е:\n";
	cin >> e;
	while (n >= e) {
		n = pow(-1, k) / factorial(k);
		sum = sum + n;
		k = k + 1;
	}
	cout << "Сумма = " << sum;
	return 0;
}
