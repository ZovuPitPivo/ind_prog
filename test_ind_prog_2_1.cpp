#include <iostresm>
#include "ind_prog_2_1.h"

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_EN.utf8");

	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		std :: cout << "������� a, b, c ��� ������������ �  " << i + 1 << " ����� ������: " << endl;
		std :: cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
			std :: cout << "����������� � ������ ��������� �� ����������, ���������� ��� ���" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		std :: cout << "�������� ������������: " << mas[i].perimeter() << endl;
		std :: cout << "������� ������������: " << mas[i]d.square() << endl;
	}
	return 0;
}