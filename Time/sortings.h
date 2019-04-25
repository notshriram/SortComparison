#pragma once

#include<array>
enum typeofsort { none, bubsort, stdsort, mrgsort, qcksort, inssort,selsort };
void swap(int& a, int& b);
class sortings
{

	
public:
	std::array<int, 1000> arrayin;
	sortings();
	void populate();
	void bubblesort();
	void standardsort();
	void insertsort();
	void quicksort();
	void mergesort();
	void selectsort();
	virtual ~sortings();
};
