#include "Controller.h"
#include <iostream>

void sensor::set_signal(int value) {
	signal = value;
}

int sensor::res_signal() {
	return signal;
}

void controller::set_order(int ord) {
	if (ord == 0) {
		order = 1;
	}else {
		order = 0;
	}
}

sensor::sensor() {
	signal = 0;
}

controller::controller() {
	order = 0;
}