# Add the parent directory to include path for 'solution.h'
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Test executable
add_executable(BinarySearchTrees.FindClosestValueInBST test.cpp)

# Link test executable against Google Test and pthread libraries
target_link_libraries(BinarySearchTrees.FindClosestValueInBST gtest gtest_main pthread)