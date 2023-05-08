#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class container {
private:
	float product;
	int maxProd;
public:

	container() {
		product = 0;
		maxProd = 0;
	}

	container(int max) {
		maxProd = max;
		product = 0;
	}

	bool addProduct(float prod) {
		if (product + prod < maxProd) {
			product += prod;
		}else {
			return false;
		}
	}

	float retProduct() {
		return product;
	}

	void fillcontainer(int koll) {
		std::cout << "¬водите грузы по очереди: ";
		for (int i = 0; i < koll; i ++) {
			float input;
			std::cin >> input;
			if (product + input < maxProd) product += input;
			else break;
		}
	}

	void show() {
		std::cout << product << "/" << maxProd << "\n";
	}

	void clean() {
		product = 0;
	}
};