cmake_minimum_required(VERSION 3.20)
project(Searching_algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(Searching_algorithms src/main.cpp include/searchingStrategy.h src/searchingStrategy.cpp src/linearSearchStrategy.cpp include/linearSearchStrategy.h src/jumpSearchStrategy.cpp include/jumpSearchStrategy.h src/interpolationSearchStrategy.cpp include/interpolationSearchStrategy.h)
add_subdirectory(Google_tests)
