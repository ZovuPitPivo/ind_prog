#pragma once

class sensor {
private:
	int signal;
public:
	sensor();
	void set_signal(char value);
	int result_signal();
};