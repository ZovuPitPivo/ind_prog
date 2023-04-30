#include <iostream>
#include "Задача1.h"

int main() {
	int x = 2;
	int y = 3;
	std::cout << "Перед обменом: \n";
	OutXY(x, y);
	Swap(x, y);
	std::cout << "После обмена: \n";
	OutXY(x, y);
	float x1 = 1.78;
	float y1 = 2.98;
	std::cout << "Перед обменом: \n";
	OutXY(x1, y1);
	Swap(x1, y1);
	std::cout << "После обмена: \n";
	OutXY(x1, y1);
	A x2(1, 1.4); A y2(3, 9.2);
	std::cout << "Перед обменом: \n";
	x2.out();
	y2.out();
	Swap(x2, y2);
	std::cout << "После обмена: \n";
	x2.out();
	y2.out();
	return 0;
}