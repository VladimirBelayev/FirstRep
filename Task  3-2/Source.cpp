#include <iostream>
#include <cmath>

using namespace std;

/**
 * \brief Нахождение суммы n членов последовательности.
 * \param k - номер члена последовательности.
 * \param n - количество складываемых членов.
 * \param nk - член последовательности.
 * \param sum - искомая сумма
 */
int getSum(int k, int n, int nk, int sum);

/**
 * \brief Точка входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
	int k;
	k = 0;
	int n;
	cout << "Сколько членов последовательности сложить?\n";
	cin >> n;

	int nk = 1;
	int sum = getSum(k, n, nk, sum);
	cout << "Сумма = " << sum;
	return 0;
}

int getSum(int k, int n, int nk, int sum) {
	int nk = 1;
	for (k = 0; k < n; k++)
	{
		nk = (nk * (-1)) / (k + 1);
		sum += nk;
	}
}
