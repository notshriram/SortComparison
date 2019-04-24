#include "timer.h"
#include<iostream>
bool hasStarted = false;
timer::timer()
{
}
void timer::setIterations(int x) {
	iterations = x;
}
void timer::start() {
	starttime = std::chrono::high_resolution_clock::now();
	hasStarted = true;
}
void timer::stop() {
	if (!hasStarted) { std::cerr << "timer not started yet"; return; }
	endtime = std::chrono::high_resolution_clock::now();
	dure += endtime - starttime;
}
std::chrono::duration<double> timer::getinsttime() {
	
	std::cout <<dure.count()<<"secs";
	return dure;
}
void timer::reset() {
	using namespace std::literals::chrono_literals;
	dure = 0s;
}
void timer::getavgtime() {
	switch (currenttype) {
	case bubsort:std::cout << "Time taken for Bubblesort: "; break;
	case stdsort:std::cout << "TIme taken for Standard Library Sort: "; break;
	case qcksort:std::cout << "TIme taken for Standard Library Sort: "; break;
	case rdxsort:std::cout << "TIme taken for Standard Library Sort: "; break;
	case mrgsort:std::cout << "TIme taken for Standard Library Sort: "; break;
	default: std::cerr << "sort type unknown";
	}
	std::cout<<dure.count()/iterations<<" secs"<<std::endl;
}

timer::~timer()
{
}
