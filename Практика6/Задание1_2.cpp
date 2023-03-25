#include "Cone.h"
#include <iostream>

int main() {
	Cone c1(3, 7);
	Cone c2(1, 2, 3, 5, 10);
	truncated_cone f1(6, 4, 7);
	truncated_cone f2(1, 2, 3, 6, 4, 7);
	std::cout << "����� 1: " << c1;
	std::cout << "������� ����������: " << c1.area() << "\n";
	std::cout << "�����: " << c1.volume() << "\n";

	std::cout << "����� 2: " << c2;
	std::cout << "������� ����������: " << c2.area() << "\n";
	std::cout << "�����: " << c2.volume() << "\n";

	std::cout << "��������� ����� 1: " << f1;
	std::cout << "������� ����������: " << f1.area() << "\n";
	std::cout << "�����: " << f1.volume() << "\n";

	std::cout << "��������� ����� 2: " << f2;
	std::cout << "������� ����������: " << f2.area() << "\n";
	std::cout << "�����: " << f2.volume() << "\n";

	return 0;
}