#include "eq2.h"
#include <iostream>
#include <cmath>

eq2::eq2(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

void eq2::set(double a1, double b1; double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

double eq2::find_x() {
	if (D < 0) {
		std::cout << "Корней нет!!\n";
		return 0;
	}else if (D == 0){
		std::cout << "Один корень!!\n";
		std::cout << -1 * b / (2 * a) << endl;
	}else {
		std::cout << "Два корня!!\n";
		std::cout << "x1 = " << (-1 * b - sqrt(D)) / (2 * a)
			<< " " << "x2 = " << (-1 * b - sqrt(D)) / (2 * a) << endl;
	}
}

double eq2::find_y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}