#pragma once
#include <iostream>

class Logger {
	Logger();
	~Logger();
	void START();
	void STOP();
	
private:
	std::string file;
	int N_LOGGER;
	int time;
	std::string buffer[1024];
};