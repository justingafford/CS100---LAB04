#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "Sort.hpp"

class BubbleSort : public Sort {
    public:
      	BubbleSort () {}; 
        /* Pure Virtual Functions */
        void sort(Container* container);
};

#endif

