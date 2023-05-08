#include <iostream>
#include "sensor.h"
#include "controller.h"
#include "Container.h"
#include <vector>
#include "PLK.h"
#include "work_with_txt.h"

int main() {
	setlocale(LC_ALL, "rus");

	std::vector <std::string> in = read();
	std::vector <std::string> out;

	std::cout << "������� ������� ���������� � �� ������� ��� ����� ��������: " << "\n";
	int size, ports = 4, koll;
	std::cin >> size >> koll;

	container cont(size); 
	PLK plk;

	plk.creat_plk(ports);

	std::cout << "����������� ������� ����������: ";
	cont.show();


	cont.fillcontainer(koll);
	std::cout << "��������� ��������: ";
	cont.show();

	plk.input_data(in[0]);
	out.push_back(plk.output_data());
	
	write(out);

	plk.show_items();

	std::cout << "�������� ��������) ������� ������ \n";
}