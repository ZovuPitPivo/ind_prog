#include <iostream>
#include "ind_prog_3_2.h"

int main() {
	int a, b;
	std::cin >> a >> b;
	rational drob(a, b);
	drob.set(a, b);
	drob.show();
}