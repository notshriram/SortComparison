#pragma once

#include "sortings.h"
#include <chrono>
#include <thread>
extern bool stdsort ,bubsort ;
using namespace std::literals::chrono_literals;
class timer
{
public:
	int iterations=1;
	timer();
	std::chrono::duration<double> dure=0s;
	std::chrono::time_point<std::chrono::steady_clock> starttime, endtime;
	void start();
	void stop();
	void reset();
	void setIterations(int);
	void getavgtime();
	std::chrono::duration<double> getinsttime();

	virtual ~timer();
};
