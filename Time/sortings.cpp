#include "sortings.h"
#include <algorithm>
//bool stdsort = false, bubsort = false;
typeofsort currenttype=none;
void swap(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

sortings::sortings()
{
	this->populate();
}
void sortings::bubblesort() {
	int i, j;
	for (i = 0; i < 999; i++)
	{ 
		for (j = 0; j < 999 - i; j++)
			if (arrayin[j] > arrayin[j + 1])
				swap(arrayin[j], arrayin[j + 1]);
	}
	currenttype = bubsort;

}
void sortings::standardsort() {
	std::sort(arrayin.begin(),arrayin.end());
	currenttype = stdsort;
}
void sortings::populate() {
	int i;
	for (int j = 0; j < 1000; j++)
	{

		i = rand() % 1001;
		arrayin[j] = i;

	}
}

sortings::~sortings()
{
}
