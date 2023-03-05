#include <iostream>
#include "eq2.h"

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	eq2 exmp(a, b, c);
	exmp.find_x();
	std::cout << exmp.find_y(6);
	return 0;
}