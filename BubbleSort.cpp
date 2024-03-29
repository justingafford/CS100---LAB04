#include <iostream>
#include "BubbleSort.hpp"

void BubbleSort::sort(Container* container) {
	for (unsigned i = 0; i < container->size(); i++) {
		for (unsigned j = 0; j < container->size()-1; j++) {
			if((*container).at(j)->evaluate() > (*container).at(j+1)->evaluate()) {
				container->swap(j,j+1);
			}
		}
	}
}
