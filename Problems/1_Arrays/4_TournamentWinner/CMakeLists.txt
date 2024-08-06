# Add the parent directory to include path for 'solution.h'
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Test executable
add_executable(Arrays.TournamentWinner test.cpp)

# Link test executable against Google Test and pthread libraries
target_link_libraries(Arrays.TournamentWinner gtest gtest_main pthread)