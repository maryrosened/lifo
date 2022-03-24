#include <iostream>
#include "Header.h"

int main() {
	int N;									// Число элементов в список
	int x;							        // Значение элемента, вводимые в список
	int removeInd;
	List list;			                    // Переменная, тип которой список

	std::cout << "Please, input the size of the array: N = ";
	std::cin >> N;							// Сколько у нас будет элементов в списке

	for (int i = 0; i < N; i++)
	{
		std::cout << i << "= index element of array = ";
		std::cin >> x;					    // Вводим значение элемента с клавиатуры
		list.Add(x);						// Добавление элемента в список
	}

	std::cout << "Your list: ";							//Вызов Функции вывода числа элементов списка на экран
	list.Show(); 			            				// Вывод списка на экран

	std::cout << std::endl << "Please, enter index element to remove = ";
	std::cin >> removeInd;

	std::cout << "This is your element: ";
	list.Pop(removeInd);

	std::cout << std::endl << "Your new list: ";
	list.Remove(removeInd);

	return 0;
}