#pragma once
#include <istream>
#include <ostream>
#include <string>

class ocean{
	std::string name, locate;
	double square, deep, size;
public:
	ocean();
	ocean(std::string nm, std::string loc);
	ocean(std::string nm, std::string loc, double sq, double de);
	void setlona(std::string nm, std::string loc);
	void setData(double sq, double de);
	std::string getName();
	std::string getLocate();
	double getdeep();
	double getsqeare();
	double getsize();

	friend std::ostream& operator<<(std::ostream& stream, ocean& obj) {
		stream <<"Рсположение: " << obj.locate << " Имя океана: " << obj.name << " Глубина: " << obj.deep << " Площадь: " << obj.square << " Размер: " << obj.size;
		return stream;
	}

	friend std::istream& operator>>(std::istream& is, ocean& dt) {
		is >> dt.name >> dt.locate >> dt.square >> dt.deep;
		return is;
	}
};

class sea : public ocean {
	std::string type;
public:
	sea() : ocean(), type("Каккой-то") {}
	sea(std::string nm, std::string loc, double sq, double de, double si) : ocean(nm, loc, sq, de, si), type(t) {}

	std::string getType();
	void setType(std::string t);
	void print();
};

class bay : public ocean {
	std::string nameOfOcean;
private:
	bay() : ocean(), nameOfOcean("Неизвестный") {}
	bay(std::string n, std::string l, int s, int d, int sa, std::string no) : ocean(n, l, s, d, sa), nameOfOcean(no) {}

	std::string getNameOfOcean() const { return nameOfOcean; }
	void setNameOfOcean(std::string no) { nameOfOcean = no; }

	void print() const override {
		std::cout << "---Залив---" << std::endl;
		std::cout << ocean;
		std::cout << "Название океана: " << nameOfOcean << std::endl;
	}
};