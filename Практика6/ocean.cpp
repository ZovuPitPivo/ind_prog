#include "ocean.h"
#include <iostream>

ocean::ocean() {
	name = "Какой-то";
	locate = "Где-то";
	size = square = deep = 0;
}

ocean::ocean(std::string nm, std::string loc) {
	name = nm; locate = loc;
	deep = square = size = 0;
}

ocean::ocean(std::string nm, std::string loc, double sq, double de) {
	size = sq * de;
	name = nm;
	locate = loc;
	square = sq;
	deep = de;
}

void ocean::setlona(std::string nm, std::string loc) {
	name = nm;
	locate = loc;
}

void ocean::setData(double sq, double de) {
	square = sq;
	deep = de;
	size = sq * de;
}

std::string ocean::getName() {
	return name;
}

std::string ocean::getLocate() {
	return locate;
}

double ocean::getdeep() {
	return deep;
}

double ocean::getsqeare() {
	return square;
}

double ocean::getsize() {
	return size;
}

std::string sea::getType() {
	return type;
}

void sea::setType(std::string t) {
	type = t;
}

void sea::print() {
	std::cout << "---Sea---" << std::endl;
	std::cout << ocean;
	std::cout << "type" << type << std::endl;
}