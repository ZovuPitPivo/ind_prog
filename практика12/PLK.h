#pragma once
#include <iostream>
#include "sensor.h"
#include "controller.h"
#include <vector>
#include <string>

class PLK {
private:
	std::vector <sensor> senses; // соответствующие контролееры соеденены между собой, поясняю. senses[0] может передать сигнал только control[0]. 
	std::vector <controller> control;

public:

	PLK() {}

	void creat_plk(int ports) {
		for (int i = 0; i < ports; i++) {
			sensor se;
			controller co;
			senses.push_back(se);
			control.push_back(co);
		}
	}

	void input_data(std::string data) {
		for (int j = 0; j < data.length(); j++) {
			char dt = data[j];
			senses[j].set_signal(dt);
			control[j].set_order(senses[j].result_signal());
		}
	}

	std::string output_data() {
		std::string data;
		for (int i = 0; i < senses.size(); i++) {
			data += control[i].give_order();
		}
		return data;
	}

	void show_items() {
		for (int i = 0; i < size(control); i++) {
			std::cout << control[i].give_order() << " ";
		}

		std::cout << "\n";

		for (int i = 0; i < size(senses); i++) {
			std::cout << senses[i].result_signal() << " ";
		}

		std::cout << "\n" << "-----------------------------------------------------------------";
	}

};