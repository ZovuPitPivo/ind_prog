#include <iostream>
#include <locale>
#include "Header2.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_EN.utf8");
	circle mas[3];

	for (int i = 0; i < 3; i++)
	{
		float r, x, y;
		std::cout << "������� ������, ���������� ������ " << i + 1 << "-� ���������� ����� ������ : ";
		std::cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
	}

	for (int i = 0; i < 3; i++)
	{
		float a, b, c;
		std::cout << "������� ������� " << i + 1 << "-�� ������������ ����� ������ : ";
		std::cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) std::cout << "����������� ����������� �����������" << std::endl;
		else std::cout << "����������� �� ����������� �����������" << std::endl;
		if (mas[i].triangle_in(a, b, c)) std::cout << "����������� ����������� � ����������" << std::endl;
		else std::cout << "����������� �� ����������� � ����������" << std::endl;
	}

	for (int i = 0; i < 3; i++) {
		float x, y;
		std::cout << "������� ���������� ������ " << i + 1 << "-� ���������� ����� ������ : ";
		std::cin >> x >> y;
		if (mas[i].check_circle(x, y)) std::cout << "���������� ������������ � " << i + 1 << "-� �����������" << std::endl;
		else std::cout << "���������� �� ������������ � " << i + 1 << "-� �����������" << std::endl;
	}
	return 0;
}
