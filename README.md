# SortComparison

Compares Various sorting algorithms on the basis of time taken to execute each of those algorithms.
This is in no way a serious project, lol. :satisfied:

### Prerequisites
* Windows 7 and up
* Visual studio 2019 (for modifying)
## Remark
The insertion sort algorithm I'm using is for some reason faster than some O(nlogn) algorithms :sweat_smile:
Okay not for 'some' reason but actually as some of the methods I used give it a better complexity than n^2.
```c++
for (auto it = arrayin.begin(); it != arrayin.end(); it++)

	{ 

		auto const insertionpoint =

			std::upper_bound(arrayin.begin(), it, *it);

		std::rotate(insertionpoint, it, it + 1);

	}
```

### Installing
if you just want to see it working, clone this repository and/or open SortCompare.exe from ./SortComparison/Release

Cheers! :muscle:
## License
 
MIT License



Copyright (c) 2019 Shriram Ravindranathan



Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:


The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
 
 
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

