#include <iostresm>
#include "ind_prog_2_1.h"

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_EN.utf8");

	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
<<<<<<< HEAD
		std :: cout << "������� a, b, c ��� ������������ �  " << i + 1 << " ����� ������: " << endl;
=======
		std :: cout << "Введите a, b, c для треугольника №  " << i + 1 << " через пробел: " << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
		std :: cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
<<<<<<< HEAD
			std :: cout << "����������� � ������ ��������� �� ����������, ���������� ��� ���" << endl;
=======
			std :: cout << "Треугольник с такими сторонами не существует, попробуйье еще раз" << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
<<<<<<< HEAD
		std :: cout << "�������� ������������: " << mas[i].perimeter() << endl;
		std :: cout << "������� ������������: " << mas[i]d.square() << endl;
=======
		std :: cout << "Периметр треугольника: " << mas[i].perimeter() << endl;
		std :: cout << "Площадь треугольника: " << mas[i]d.square() << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
	}
	return 0;
}
