#include "Cone.h"
#include <cmath>
const double pi = 3.14159265;

Cone::Cone() {
	x = y = z = radius = height = 0;
}

Cone::Cone(double r, double h) {
	x = y = z = 0.0;
	radius = r;
	height = h;
}

Cone::Cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}

void Cone::setCoordenate(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

void Cone::setRadius(double h) {
	height = h;
}

void Cone::setHeight(double r) {
	radius = r;
}

double Cone::getHieght() {
	return height;
}

double Cone::getRadius() {
	return radius;
}

double Cone::area() {
	double l = sqrt(height * height + radius * radius);
	return pi * radius * (radius + l);
}

double Cone::volume() {
	return pi * radius * radius * height / 3;
}

truncated_cone::truncated_cone() {
	x = y = z = radius1 = radius2 = height = 0;
}

truncated_cone::truncated_cone(double r1, double r2, double h) {
	x = y = z = 0;
	radius1 = r1;
	radius2 = r2;
}

truncated_cone::truncated_cone(double a, double b, double c, double r1, double r2, double h) {
	x = a;
	y = b;
	z = c;
	radius1 = r1;
	radius2 = r2;
	height = h;
}

void truncated_cone::setRadiusMax(double r) {
	radius1 = r;
}

void truncated_cone::setRadiusMin(double r){
	radius2 = r;
}

double truncated_cone::getRadiusMax(){
	return radius1;
}

double truncated_cone::getRadiusMin() {
	return radius2;
}

double truncated_cone::area() {
	double k = abs(radius1 - radius2);
	double l = sqrt(height * height + k * k);
	return pi * radius1 * radius1 + pi * radius2 * radius2 + pi * (radius1 + radius2) * l;
}

double truncated_cone::volume(){
	return pi * height * (radius1 * radius1 + radius1 * radius2 + radius2 * radius2);
}