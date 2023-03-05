#include <iostream>
#include "rational.h"

rational::rational(int a, int b) {
	if (b1 != 0) {
		this->a = a;
		this->b = b;
	}
	else {
		std::cout << "Такая дробь не может существовать" << endl;
	}
	if (a > b) {
		a = a - (b * (a / b));
	}
	if (b % a == 0) {
		b = b / a;
		a = 1;
	}
}

void rational::set(int a1, int b1) {
	a = a1;
	b = b1;
}
void rational::show() {
	std::cout << a << "/" << b << endl;
}