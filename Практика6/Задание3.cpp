#include <iostream>
#include <string>
#include "ocean.h"

int main() {
    ocean ocean("�����", "�������� ����� ������ ������", 168723000, 10968, 63200000);
    sea sea("����������", "�������� ������", 415266, 55, 377000, "���������� ����");
    bay bay("�������� �����", "������", 1320000, 200, 821000, "�������� ��������� �����");

    ocean.print();
    std::cout << std::endl;
    sea.print();
    std::cout << std::endl;
    bay.print();
    std::cout << std::endl;

    bay.setname("�������� ����� (������)");
    bay.setNameOfOcean("������������� �����");
    bay.print();
    std::cout << std::endl;

    return 0;
}