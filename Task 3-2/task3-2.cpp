#include <iostream>
#include <cmath>


using namespace std;

/**
 * \brief Функция находит сумму n членов заданной последовательности
 * \param n - количество членов последовательности которое необходимо сложить
 * \param nk - член последовательности
 * \param k - номер члена последовательности
 * \param sum - искомая сумма
 * \return 0 в случае успеха
 */
int main()
{
	int k;
	k = 0;
	int n;
	cout << "Сколько членов последовательности сложить?\n";
	cin >> n;
	double nk = pow(-1, k);
	double sum;
	sum = 0;
	for (k = 0; k < n; k++)
	{
		nk = (nk * (-1)) / (k + 1);
		sum += nk;
	}
	cout << "Сумма = " << sum;
	return 0;
}

