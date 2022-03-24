#include <iostream>
#include "Header.h"

int main() {
	int N;									// ����� ��������� � ������
	int x;							        // �������� ��������, �������� � ������
	int removeInd;
	List list;			                    // ����������, ��� ������� ������

	std::cout << "Please, input the size of the array: N = ";
	std::cin >> N;							// ������� � ��� ����� ��������� � ������

	for (int i = 0; i < N; i++)
	{
		std::cout << i << "= index element of array = ";
		std::cin >> x;					    // ������ �������� �������� � ����������
		list.Add(x);						// ���������� �������� � ������
	}

	std::cout << "Your list: ";							//����� ������� ������ ����� ��������� ������ �� �����
	list.Show(); 			            				// ����� ������ �� �����

	std::cout << std::endl << "Please, enter index element to remove = ";
	std::cin >> removeInd;

	std::cout << "This is your element: ";
	list.Pop(removeInd);

	std::cout << std::endl << "Your new list: ";
	list.Remove(removeInd);

	return 0;
}