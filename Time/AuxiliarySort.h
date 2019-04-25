#pragma once
#include<vector>
/*quicksort backend so to speak.
implemented using stl functions.
*/
template <typename It>
void quickSort(It low, It high)
{
    using std::swap;
    auto size = std::distance(low, high);
    if (size > 1) {
        auto p = std::prev(high);
        swap(*std::next(low, size / 2), *p);
        auto q = std::partition(low, p, [p](decltype(*p) v) { return v < *p; });
        swap(*q, *p);
        quickSort(low, q);
        quickSort(std::next(q), high);
    }
}
//MergeSort backend(per se)
template<typename It1, typename It2>
void merger(It1 source_begin,It1 source_end,It2 target_begin,It2 target_end)
{
	auto range_length = std::distance(source_begin, source_end);

	if (range_length < 2)
	{
		return;
	}

	auto left_chunk_length = range_length >> 1;
	auto source_left_chunk_end = source_begin;
	auto target_left_chunk_end = target_begin;

	std::advance(source_left_chunk_end, left_chunk_length);
	std::advance(target_left_chunk_end, left_chunk_length);

	merger(target_begin,
		target_left_chunk_end,
		source_begin,
		source_left_chunk_end);

	merger(target_left_chunk_end,
		target_end,
		source_left_chunk_end,
		source_end);

	std::merge(source_begin,
		source_left_chunk_end,
		source_left_chunk_end,
		source_end,
		target_begin);
}

template<typename It>
void merge_sort(It begin, It end)
{
	auto range_length = std::distance(begin, end);

	if (range_length < 2)
	{
		return;
	}

	using type = typename std::iterator_traits<It>::value_type;
	std::vector<type> aux(begin, end);
	merger(aux.begin(), aux.end(), begin, end);
}
//69th line lolz