#pragma once

class sensor {
private:
	int signal;
public:
	void set_signal(int val);
	int res_signal();
	sensor();
};

class controller {
private:
	int order;
public:
	void set_order(int ord);
	controller();
};
