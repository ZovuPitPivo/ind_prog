#include "sensor.h"
#include "controller.h"

void sensor::set_signal(char value) {
	if (value == '0') signal = 0;
	else signal = 1;
}

int sensor::result_signal() {
	return signal;
}

sensor::sensor() {
	signal = 0;
}

void controller::set_order(int ord) {
	order = ord;
}

controller::controller() {
	order = 0;
}

void controller::reverssignal(){
	if (order == 0)order = 1;
	else order = 0;
}

char controller::give_order(){
	if (order == 0) {
		return '0';
	}else {
		return '1';
	}
}