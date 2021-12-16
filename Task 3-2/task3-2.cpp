#include <iostream>
#include <cmath>


using namespace std;

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
	int k;
	k = 0;
	int n;
	cout << "Сколько членов последовательности сложить?\n";
	cin >> n;
	double nk = 1;
	double sum = 0;
	for (k = 0; k < n; k++)
	{
		nk = (nk * (-1)) / (k + 1);
		sum += nk;
	}
	cout << "Сумма = " << sum;
	return 0;
}

