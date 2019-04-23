#include "timer.h"
#include<iostream>


timer::timer()
{
}
void timer::setIterations(int x) {
	iterations = x;
}
void timer::start() {
	starttime = std::chrono::high_resolution_clock::now();
}
void timer::stop() {
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
	if(bubsort)std::cout << "Time taken for Bubblesort: ";
	if(stdsort)std::cout << "TIme taken for Standard Library Sort: ";
	std::cout<<dure.count()/iterations<<" secs"<<std::endl;
}

timer::~timer()
{
}
