#include <iostream>
#include <chrono>
#include <thread>
#include "sortings.h"
//this class has a member array which is populated randomly with a 1000 elements each between 0-1000
#include "timer.h"
void sorttimecheck(sortings& list,timer& clock,const int t,const typeofsort type) {
	for (int i = 0; i < t; i++) {
		clock.start();
		//here I assume switch takes negligible time or atleast fairly equal time for each case.
		switch (type) {
		case bubsort:list.bubblesort(); break;
		case stdsort:list.standardsort(); break;
		case qcksort:break;
		case rdxsort:break;
		case mrgsort:break;
		default:std::cerr << "type of sort undefined";
		}
		clock.stop();
		list.populate();
	}
	clock.getavgtime();
	clock.reset();
}

int main () {
	timer clock;
	sortings list;
	int t;
	std::cout << "enter no of iterations to run: ";
	std::cin >> t;
	clock.setIterations(t);
	sorttimecheck(list,clock,t,bubsort);
	sorttimecheck(list, clock, t, stdsort);

	//for (auto i : list.arrayin)std::cout << i << "\n";
	system("pause");
}
