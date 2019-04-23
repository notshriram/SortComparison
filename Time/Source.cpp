#include <iostream>
#include <chrono>
#include <thread>
#include "sortings.h"
//this has an array which is populated randomly with a 1000 elements between 0-1000
#include "timer.h"


int main () {
	timer clock;
	sortings list;
	int t;
	std::cout << "enter no of iterations to run: ";
	std::cin >> t;
	clock.setIterations(t);
	for (int i = 0; i < t;i++) {
		clock.start();
		list.bubblesort();
		clock.stop();
	}
	clock.getavgtime();
	list.populate();
	clock.reset();
	for (int i = 0; i < t; i++) {
		clock.start();
		list.standardsort();
		clock.stop();
	}
	clock.getavgtime();
	//for (auto i : list.arrayin)std::cout << i << "\n";
	system("pause");
}
