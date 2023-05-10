#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "PLK.h"
#include "work_with_txt.h"


class pult {
private:
	int button;
	std::vector <std::string> buttons;

	void creat_pult() {
		button = 0;
		buttons.push_back("waiting");
		buttons.push_back("start"); buttons.push_back("stop"); buttons.push_back("restart");
		buttons.push_back("--1--"); buttons.push_back("--2--"); buttons.push_back("--3--");
	}

	void push_button(int butt) {
		if (butt >= buttons.size()) {
			std::cout << "ERROR: OUT OF BUTTON, PRESS ANOTHER BUTTON";
			std::cin >> butt;
			push_button(butt);
		}
		else button = butt;
	}

	void show_buttons() {
		for (int i = 0; i < buttons.size(); i ++) {
			std::cout << buttons[i] << ": " << i << "; ";
		}
		std::cout << "\n";
	}

public:

	pult() {
		creat_pult();
	}

	void pult_in_work() {
		while (button != 2) {
			int butt = 0;
			std::cout << "PRESS BUTTON\n";
			show_buttons();
			std::cin >> butt;
			if (butt == 1) {
				PLK plk(4);
				std::vector <std::string> in = read();
				plk.work(in);
			}else if (butt == 2) break;
		}
	}

};