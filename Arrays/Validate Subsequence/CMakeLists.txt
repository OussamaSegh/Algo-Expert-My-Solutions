# Add the parent directory to include path for 'solution.h'
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Test executable
add_executable(validate_subsequence test.cpp)

# Link test executable against Google Test and pthread libraries
target_link_libraries(validate_subsequence gtest gtest_main pthread)

# Add tests to CTest
add_test(NAME validate_subsequence COMMAND validate_subsequence)