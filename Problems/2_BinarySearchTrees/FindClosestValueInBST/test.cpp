#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

TEST(SortedSquaredArrayTest, BasicTests) {
  // Test with positive numbers
  std::vector<int> input1 = {1, 2, 3, 4, 5};
  std::vector<int> expected1 = {1, 4, 9, 16, 25};
  EXPECT_EQ(sortedSquaredArray(input1), expected1);

  // Test with negative numbers
  std::vector<int> input2 = {-5, -4, -3, -2, -1};
  std::vector<int> expected2 = {1, 4, 9, 16, 25};
  EXPECT_EQ(sortedSquaredArray(input2), expected2);

  // Test with mixed positive and negative numbers
  std::vector<int> input3 = {-3, -2, -1, 0, 1, 2, 3};
  std::vector<int> expected3 = {0, 1, 1, 4, 4, 9, 9};
  EXPECT_EQ(sortedSquaredArray(input3), expected3);

  // Test with zeros
  std::vector<int> input4 = {0, 0, 0, 0, 0};
  std::vector<int> expected4 = {0, 0, 0, 0, 0};
  EXPECT_EQ(sortedSquaredArray(input4), expected4);

  // Test with a single element
  std::vector<int> input5 = {5};
  std::vector<int> expected5 = {25};
  EXPECT_EQ(sortedSquaredArray(input5), expected5);
}

TEST(SortedSquaredArrayTest, EdgeCases) {
  // Test with an array of one element (negative)
  std::vector<int> input1 = {-7};
  std::vector<int> expected1 = {49};
  EXPECT_EQ(sortedSquaredArray(input1), expected1);

  // Test with the largest possible range of positive and negative numbers
  std::vector<int> input2 = {-10000, -5000, 0, 5000, 10000};
  std::vector<int> expected2 = {0, 25000000, 25000000, 100000000, 100000000};
  EXPECT_EQ(sortedSquaredArray(input2), expected2);

  // Test with large input array
  std::vector<int> input3;
  std::vector<int> expected3;
  for (int i = -1000; i <= 1000; ++i) {
    input3.push_back(i);
    expected3.push_back(i * i);
  }
  std::sort(expected3.begin(), expected3.end());
  EXPECT_EQ(sortedSquaredArray(input3), expected3);
}

TEST(SortedSquaredArrayTest, RandomCases) {
  // Test with random positive and negative numbers
  std::vector<int> input1 = {-10, -5, -3, 0, 1, 4, 8};
  std::vector<int> expected1 = {0, 1, 9, 16, 25, 64, 100};
  EXPECT_EQ(sortedSquaredArray(input1), expected1);

  // Test with all elements being the same negative number
  std::vector<int> input2 = {-2, -2, -2, -2, -2};
  std::vector<int> expected2 = {4, 4, 4, 4, 4};
  EXPECT_EQ(sortedSquaredArray(input2), expected2);

  // Test with all elements being the same positive number
  std::vector<int> input3 = {3, 3, 3, 3, 3};
  std::vector<int> expected3 = {9, 9, 9, 9, 9};
  EXPECT_EQ(sortedSquaredArray(input3), expected3);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
