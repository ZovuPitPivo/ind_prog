#pragma once

class eq2 {
private:
	double a, b, c;
	double D;
public:
	eq2(double a, double b, double c);
	void set(double a1, double b1, double c1);
	double find_x();
	double find_y(double x1);
};