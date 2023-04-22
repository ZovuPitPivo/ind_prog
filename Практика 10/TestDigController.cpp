#include <iostream>
#include "DlgitalContriller.h"
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");
	digsensor sens;
	digcotroller control;

	for (int i = 0; i < 3; i++) {
		int mass = rand() % 100;
		sens.setvalue(mass);
		control.set_order(sens.getvalue());
		std::cout << "��� ���� ����� ������� ���� �� ������ 2� ������, ����� ��������� ����: " << control.uwu_order() << "\n";
	}
	std::cout << "��� ����� ���������!";
}