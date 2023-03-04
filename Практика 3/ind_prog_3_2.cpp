#include <iostream>
#include "ind_prog_3_2.h"

rational::rational(int a, int b) {
	if (b != 0) {
		this->a = a;
		this->b = b;
		return true;
	}else {
		std::cout << "“ака€ дробь не может существовать" << endl;
		return false;
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
	if (b1 != 0) {
		a = a1;
		b = b1;
	}
	else {
		std::cout << "’у€ тебе, а не дробь!!!" << endl;
		return false;
	}
	if (a > b) {
		a = a - (b * (a / b));
	}
	if (b % a == 0) {
		b = b / a;
		a = 1;
	}
}
void rational::show() {
	std :: cout << a << "/" << b << endl;
}
