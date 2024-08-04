# Add the parent directory to include path for 'solution.h'
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Test executable
add_executable(test_two_number_sum test.cpp)

# Link test executable against Google Test and pthread libraries
target_link_libraries(test_two_number_sum gtest gtest_main pthread)

# Add tests to CTest
add_test(NAME TwoNumberSumTest COMMAND test_two_number_sum)