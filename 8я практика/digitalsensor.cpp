#include "digitalsensor.h"

void digsensor::setvalue(int va) {
	value = va;
}

int digsensor::getvalue() {
	return value;
}

digsensor::digsensor() {
	value = 0;
}