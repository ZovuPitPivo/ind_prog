#include <iostream>
#include <string>
#include "ocean.h"

int main() {
    ocean ocean("Тихий", "Западная часть Тихого океана", 168723000, 10968, 63200000);
    sea sea("Балтийское", "Северная Европа", 415266, 55, 377000, "Внутреннее море");
    bay bay("Гудзонов залив", "Канада", 1320000, 200, 821000, "Северный Ледовитый океан");

    ocean.print();
    std::cout << std::endl;
    sea.print();
    std::cout << std::endl;
    bay.print();
    std::cout << std::endl;

    bay.setname("Гудзонов залив (Канада)");
    bay.setNameOfOcean("Атлантический Океан");
    bay.print();
    std::cout << std::endl;

    return 0;
}