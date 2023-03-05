#include <iostream>
#include "rational.h"

int main() {
	int a, b;
	std::cin >> a >> b;
	rational drob(a, b);
	drob.set(a, b);
	drob.show();
}