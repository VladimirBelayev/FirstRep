#include <iostream>
#include <iomanip>
#include <ctime>
#include <locale>
using namespace std;


/**
* \brief Заполнение массива случайными числами
* \param array Массив
* \param size Размер массива
* \param LOW_BOUND нижняя граница интервала
* \param UP_BOUND верхняя граница интервала
**/
void Random(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND);

/**
* \brief Ввод массива с клавиатуры
* \param array Массив
* \param size Размер массива
**/
void UserInput(int* array, const size_t size);

/**
* \brief Вывод массива
* \param array Массив
* \param size Размер массива
**/
void Print(int* array, const size_t size);

/**
* \brief Сумма элементов массива, индекс которых нечётен
* \param array Массив
* \param size Размер массива
* \param return Значение суммы
**/
int GetSum(int* array, const size_t size);

/**
* \brief Количество элементов больше А и кратных 5
* \param array Массив
* \param size Размер массива
**/
void NumberOfElements(int* array, const size_t size);

/**
* \brief Метод, делящий все элементы массива, кратные 2, на первый элемент массива
* \param array Массив
* \param size Размер массива
**/
void DivideElementsWithEvenNumbers(int* array, const size_t size);

/**
* \brief Выбор заполнения массива: рандомное генерирование (0), заполнение вручную (1)
**/
enum class Fill { RANDOM, Mannual };


/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
**/
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Введите количество элементов массива: ";
	int* array;
	int size;
	cin >> size;

	/*ПРОВЕРКИ НА ВАЛИДНОСТЬ НЕТ. не понимаю как сделать*/

	array = new int[size];
	cout << static_cast<int>(Fill::RANDOM) << "- Случайный массив" << endl << static_cast<int>(Fill::Mannual) << "- Заполнить массив вручную" << endl;
	int choice;
	cin >> choice;

	const int LOW_BOUND = -10, UP_BOUND = 20;

	const auto fill = static_cast<Fill>(choice);
	switch (fill)
	{
	case Fill::RANDOM:
		Random(array, size, LOW_BOUND, UP_BOUND);
		Print(array, size);
		break;
	case Fill::Mannual:
		UserInput(array, size);
		Print(array, size);
		break;
	default:
		cout << "Ошибка! Не выбран ни один из вариантов";
	}

	cout << "Сумма элементов с нечётным индексом = " << getSum(array, size) << "\n\n";

	cout << "Количество элементов больше A и кратных пяти:\n";
	NumberOfElements(array, size);

	cout << "Все элементы массива, кратные 2, разделить на первый элемент:\n";
	DivideElementsWithEvenNumbers(array, size);



	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	}

	return 0;
}

void Random(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
	for (size_t i = 0; i < size; i++) {
		array[i] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
	}
}

void UserInput(int* array, const size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int* array, const size_t size) {
	cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) {
		cout << array[i] << ";" << setw(3);
	}
	cout << array[size - 1] << "}\n\n";
}

int getSum(int* array, const size_t size) {
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		if (i % 2 != 0) {
			sum += array[i];
		}
	}
	return sum;
}

void NumberOfElements(int* array, const size_t size) {
	int count = 0;
	int A;
	cout << "Введите A: ";
	cin >> A;
	for (size_t i = 0; i < size; i++) {
		if (array[i] > A && array[i] % 5 == 0) {
			count += 1;
		}
	cout << count;
	}
	cout << "\n\n";
}

void DivideElementsWithEvenNumbers(int* array, const size_t size) {
	double newEl;
	int pE;
	pE = array[0];
	for (size_t i = 0; i < size; i++) {
		if (i % 2 == 0) {
			newEl = (float)array[i] / pE;
			array[i] = newEl;
			cout << "ar[" << i << "] = " << newEl << "\n";
		}
	}
