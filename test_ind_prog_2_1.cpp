#include <iostresm>
#include "ind_prog_2_1.h"

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_EN.utf8");

	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
<<<<<<< HEAD
		std :: cout << "Ââåäèòå a, b, c äëÿ òðåóãîëüíèêà ¹  " << i + 1 << " ÷åðåç ïðîáåë: " << endl;
=======
		std :: cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ a, b, c Ð´Ð»Ñ Ñ‚Ñ€ÐµÑƒÐ³Ð¾Ð»ÑŒÐ½Ð¸ÐºÐ° â„–  " << i + 1 << " Ñ‡ÐµÑ€ÐµÐ· Ð¿Ñ€Ð¾Ð±ÐµÐ»: " << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
		std :: cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
<<<<<<< HEAD
			std :: cout << "Òðåóãîëüíèê ñ òàêèìè ñòîðîíàìè íå ñóùåñòâóåò, ïîïðîáóéüå åùå ðàç" << endl;
=======
			std :: cout << "Ð¢Ñ€ÐµÑƒÐ³Ð¾Ð»ÑŒÐ½Ð¸Ðº Ñ Ñ‚Ð°ÐºÐ¸Ð¼Ð¸ ÑÑ‚Ð¾Ñ€Ð¾Ð½Ð°Ð¼Ð¸ Ð½Ðµ ÑÑƒÑ‰ÐµÑÑ‚Ð²ÑƒÐµÑ‚, Ð¿Ð¾Ð¿Ñ€Ð¾Ð±ÑƒÐ¹ÑŒÐµ ÐµÑ‰Ðµ Ñ€Ð°Ð·" << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
<<<<<<< HEAD
		std :: cout << "Ïåðèìåòð òðåóãîëüíèêà: " << mas[i].perimeter() << endl;
		std :: cout << "Ïëîùàäü òðåóãîëüíèêà: " << mas[i]d.square() << endl;
=======
		std :: cout << "ÐŸÐµÑ€Ð¸Ð¼ÐµÑ‚Ñ€ Ñ‚Ñ€ÐµÑƒÐ³Ð¾Ð»ÑŒÐ½Ð¸ÐºÐ°: " << mas[i].perimeter() << endl;
		std :: cout << "ÐŸÐ»Ð¾Ñ‰Ð°Ð´ÑŒ Ñ‚Ñ€ÐµÑƒÐ³Ð¾Ð»ÑŒÐ½Ð¸ÐºÐ°: " << mas[i]d.square() << endl;
>>>>>>> d4663b92751777a5191ba279de5c4e0fdedf464e
	}
	return 0;
}
