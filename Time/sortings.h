#pragma once

#include<array>
enum typeofsort { none, bubsort, stdsort, mrgsort, qcksort, rdxsort };
class sortings
{

	
public:
	std::array<int, 1000> arrayin;
	sortings();
	void populate();
	void bubblesort();
	void standardsort();

	virtual ~sortings();
};
