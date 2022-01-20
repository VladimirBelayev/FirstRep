#include <iostream>
#include <cmath>

using namespace std;

/**
 * \brief Нахождение суммы n членов последовательности.
 * \param k - номер члена последовательности.
 * \param n - количество складываемых членов.
 * \param nk - член последовательности.
 * \return sum -  искомая сумма
 */
double getSum(const int n);

/**
 * \brief Точка входа в программу.
  * \return 0 в случае успеха.
 */
int main()
{
	int k = 0;
	int n = 1;
	cout << "Сколько членов последовательности сложить?\n";
	cin >> n;
	if (n < 2) {
		cout << "Неверное значение";
		return -1;
	}

	cout << "Сумма = " << getSum(n);
	return 0;
}

double getSum(const int n) {
	double nk = 1.0;
	double sum = 0;
	for (int k = 0; k < n; k++)
	{
		nk = (nk * (-1)) / (k + 1);
		sum += nk;
	}
	return sum;
}