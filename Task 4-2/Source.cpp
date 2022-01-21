#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <locale>
using namespace std;


/**
* \brief Заполнение массива случайными числами
* \param array - Массив
* \param size Размер массива
* \param LOW_BOUND Нижняя граница интервала
* \param UP_BOUND Верхняя граница интервала
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
* \brief Меняет последний отрицательный элемент на предпоследний элемент
* \param array Массив
* \param size Размер массива
**/
void ChangeElement(int* array, const size_t size);

/**
* \brief Создание массива A из массива D
* \param array Вводимый массив
* \param arrayA Сформированный массив
* \param size Размер массива
**/
int* CreateAr(int* array, const size_t size);

/**
* \brief Удаляет элементы с чёрной первой цифрой
* \param array Массив
* \param size Размер массива
**/
void DelEvenNumbEl(int* array, const size_t size);

enum class Fill { RANDOM, Mannual };


/**
* \brief Точка входа в программу
* \return 0 в случае успеха
**/
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Введите количество элементов массива: ";
	int size;
	cin >> size;
	if (size < 1) {
		cout << "Неверный размер";
		return -1;
	}
	int* array;
	array = new int[size];
	cout << static_cast<int>(Fill::RANDOM) << "- Случайный массив" << endl << static_cast<int>(Fill::Mannual) << "-Заполнить массив вручную" << endl;
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
		cout << "Ошибка! не выбран ни один из вариантов";
	}
  cout << "\n";
	cout << "Замена отрицательного элемента\n";
	ChangeElement(array, size);
	cout << "Удаление элементов массива с чётной первой цифрой\n";
	DelEvenNumbEl(array, size);
	cout << "\n";
  
	arrayA = CreateAr(array, size);


	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	}
        if (arrayA != nullptr)
	{
		delete[] arrayA;
		arrayA = nullptr;
	}
	return 0;
}

void Random(int*array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
  random_device rd;
  mt19937 gen(rd());

  const std::uniform_int_distribution<>uniformIntDistribution(LOW_BOUND, UP_BOUND);
  auto* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = uniformIntDistribution(gen);
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

void ChangeElement(int* array, const size_t size) {
	int last = 0;
	size_t index = 0;
	for (size_t i = 0; i < size; i++) {
		if (array[i] < 0) {
			last = array[i];
			index = i;
		}
	}
	cout << "Последний отрицательный элемент: arr[" << index << "] = " << last << "\n";
	cout << "arr[" << index << "] = " << array[size - 2] << "\n\n";
}

void DelEvenNumbEl(int* array, const size_t size) {
	Print(array, size);
	size_t j = 0;
	size_t s = size;
  int elem_mas;
	cout << "Результат:\n";
	for (size_t i = 0; i < s; i++) {
    elem_mas=array[i];
    while (elem_mas / 10 != 0){
      elem_mas = elem_mas / 10;
      }
		if (elem_mas % 2 != 0) {
			array[j] = array[i];
			cout << "ar[" << j << "]= " << array[j] << "\n";
			j++;
		}
	}
}

int* CreateAr(int* array, const size_t size) {
	int* arrayA;
	arrayA = new int[size];
	for (size_t i = 0; i < size; i++) {
		if (i % 2 == 0) {
			arrayA[i] = pow(array[i], 2);
		}
		else {
			arrayA[i] = array[i] * 2;
		}
	}
	return arrayA;
}
