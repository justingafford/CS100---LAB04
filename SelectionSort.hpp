#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

#include "Sort.hpp"
#include "container.hpp"
class SelectionSort : public Sort {
    public:
	SelectionSort(){};
        /* Pure Virtual Functions */
        void sort(Container* container);
};

#endif
