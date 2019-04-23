#pragma once

#include<array>

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
