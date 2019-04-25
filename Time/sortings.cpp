#include "sortings.h"
#include "AuxiliarySort.h"
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

		i = rand() % 1000;
		arrayin[j] = i;

	}
}
void sortings::insertsort(){
	for (auto it = arrayin.begin(); it != arrayin.end(); it++)
	{ 
		auto const insertionpoint =
			std::upper_bound(arrayin.begin(), it, *it);
		std::rotate(insertionpoint, it, it + 1);
	}
	currenttype = inssort;
}
void sortings::quicksort(){
	quickSort(arrayin.begin(),arrayin.end());
	currenttype = qcksort;
}
void sortings::mergesort(){
	merge_sort(arrayin.begin(), arrayin.end());
	currenttype = mrgsort;
}
void sortings::selectsort() {

	for (auto it = std::begin(arrayin); it != std::end(arrayin); ++it)
	{
		std::iter_swap(it, std::min_element(it, arrayin.end()));
	}
	currenttype = selsort;
}

sortings::~sortings()
{
}
