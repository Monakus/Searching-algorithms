project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../include)

# adding the Google_Tests_run target
set(FILES_TO_TEST searchingTests.h searchingTests.cpp ../src/searchingStrategy.cpp ../src/linearSearchStrategy.cpp ../src/jumpSearchStrategy.cpp ../src/interpolationSearchStrategy.cpp)
add_executable(Google_Tests_run ${FILES_TO_TEST})

target_link_libraries(Google_Tests_run gtest gtest_main)
