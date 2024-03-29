#include <iostream>
#include "SelectionSort.hpp"

using namespace std;
void SelectionSort::sort(Container* container) {
	for (unsigned i = 0; i < container->size() - 1; i++) {
		unsigned index = i;
		for (unsigned j = i + 1; j < container -> size(); ++j) {
			if ((*container).at(j)->evaluate() < (*container).at(index)->evaluate()) {
				index = j;
			}
		}
		container->swap(i,index);
	}
}
