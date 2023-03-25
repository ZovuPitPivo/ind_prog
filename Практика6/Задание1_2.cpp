#include "Cone.h"
#include <iostream>

int main() {
	Cone c1(3, 7);
	Cone c2(1, 2, 3, 5, 10);
	truncated_cone f1(6, 4, 7);
	truncated_cone f2(1, 2, 3, 6, 4, 7);
	std::cout << "Конус 1: " << c1;
	std::cout << "Площадь поверности: " << c1.area() << "\n";
	std::cout << "Объем: " << c1.volume() << "\n";

	std::cout << "Конус 2: " << c2;
	std::cout << "Площадь поверности: " << c2.area() << "\n";
	std::cout << "Объем: " << c2.volume() << "\n";

	std::cout << "Усеченный конус 1: " << f1;
	std::cout << "Площадь поверности: " << f1.area() << "\n";
	std::cout << "Объем: " << f1.volume() << "\n";

	std::cout << "Усеченный конус 2: " << f2;
	std::cout << "Площадь поверности: " << f2.area() << "\n";
	std::cout << "Объем: " << f2.volume() << "\n";

	return 0;
}