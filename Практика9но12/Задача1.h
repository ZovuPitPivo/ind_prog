#pragma once
#include <iostream>

template <class T> void Swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template <class T> void OutXY(T& a, T& b) {
	std::cout << a << " " << b << "\n";
}

class A {
private:
	int value;
	float signal;
public:
	void out() {
		std::cout << value << " " << signal << "\n";
	}

	A(int d, float h) {
		this->value = d;
		this->signal = h;
	}

	A operator =(A& T) {
		value = T.value;
		signal = T.signal;
		return *this;
	}
};