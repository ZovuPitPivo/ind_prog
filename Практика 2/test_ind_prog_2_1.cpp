#include <iostream>
#include "Header1.h"

int main() {
	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "������� a, b, c ��� ������������ �  " << i + 1 << " ����� ������: " << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
			cout << "����������� � ������ ��������� �� ����������, ���������� ��� ���" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "�������� ������������: " << mas[i].perimeter() << endl;
		cout << "������� ������������: " << mas[i]d.square() << endl;
	}
	return 0;
}