#include <iostream>
#include "Controller.h"
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");
	sensor sens;
	controller control;

	while (sens.res_signal() == 0) {
		std::cout << "Деталь не достигла конца! \n";
		int g;
		g = rand() % 2;
		sens.set_signal(g);
		control.set_order(sens.res_signal());
	}
	std::cout << "Деталь в коробке! \n";
}