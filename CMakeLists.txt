CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
 
ADD_SUBDIRECTORY(googletest)
 
SET(CMAKE_CXX_STANDARD 11)
 
ADD_EXECUTABLE(Cmain
    main.cpp
)
 
ADD_EXECUTABLE(test
   unit_test.cpp
   Add.cpp
   Div.cpp
   Op.cpp
   Rand.cpp
   BubbleSort.cpp
   ListContainer.cpp
   Mult.cpp
   Pow.cpp
   SelectionSort.cpp
   Sub.cpp
   VectorContainer.cpp
)
 
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

