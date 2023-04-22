#include "DlgitalContriller.h"
#include <math.h>

void digsensor::setvalue(int va) {
	value = va;
}

int digsensor::getvalue() {
	return value;
}

digsensor::digsensor() {
	value = 0;
}

digcotroller::digcotroller() {
	order = 0;
}

void digcotroller::set_order(int ord) {
	float g = 9.8;
	int h = 2;
	order = ceil(ord * g * h);
}

int digcotroller::uwu_order() {
	return order;
}