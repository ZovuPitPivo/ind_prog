#include <iostream>
#include "ind_prog_3_1.h"

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	kvad_ur exmp(a, b, c);
	exmp.find_x();
	std::cout << exmp.find_y(6);
	return 0;
}