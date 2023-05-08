#pragma once

class controller {
private:
	int order;
public:
	char give_order();
	void reverssignal(int sig);
	void set_order(int ord);
	controller();
};