#include <iostream>
#include "digitalsensor.h"
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");
	
	digsensor f;
	int g;
	g = rand() % 100;
	f.setvalue(g);

	std::cout << "�� ��������� ���� ����, ������ ������������ ��� �����: ";
	std::cout << f.getvalue();
}