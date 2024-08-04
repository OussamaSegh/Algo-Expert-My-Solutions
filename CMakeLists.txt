cmake_minimum_required(VERSION 3.10)
project(AlgoExpertSolution)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add GoogleTest
add_subdirectory(extern/googletest)

# Enable testing
enable_testing()

# Add subdirectories
add_subdirectory(Arrays)