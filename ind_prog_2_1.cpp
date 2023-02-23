#include <iostream>
#include <cmath>
#include <ind_prog_2_1.h>

bool tringle::exst_tr(double a, double b, double c) {
	return ((a + b > c) && (a + c > b) && (b + c > a));
}
void tringle::set(a1, b1, c1) {
	a = a1;
	b = b1;
	c = c1;
}
void tringle::show() {
	std::cout << "1 сторона: " << a << endl;
	std::cout << "2 сторона: " << b << endl;
	std::cout << "3 сторона: " << c << endl;
}
double tringle::perimetr() {
	double P = a + b + c;
	return P;
}
double tringle::square() {
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}
