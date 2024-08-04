#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

// Test suite
TEST(IsValidSubsequenceTest, BasicTests) {
  // Test when the sequence is a valid subsequence
  EXPECT_TRUE(isValidSubsequence({1, 2, 3, 4}, {1, 3, 4}));

  // Test when the sequence is not a valid subsequence
  EXPECT_FALSE(isValidSubsequence({1, 2, 3, 4}, {1, 4, 3}));

  // Test when the sequence is empty (empty sequence is always valid)
  EXPECT_TRUE(isValidSubsequence({1, 2, 3, 4}, {}));

  // Test when the array is empty (non-empty sequence cannot be valid)
  EXPECT_FALSE(isValidSubsequence({}, {1, 2, 3}));

  // Test when both array and sequence are empty
  EXPECT_TRUE(isValidSubsequence({}, {}));
}

TEST(IsValidSubsequenceTest, EdgeCases) {
  // Test when array and sequence are identical
  EXPECT_TRUE(isValidSubsequence({1, 2, 3, 4}, {1, 2, 3, 4}));

  // Test when sequence has only one element and is in array
  EXPECT_TRUE(isValidSubsequence({1, 2, 3, 4}, {3}));

  // Test when sequence has only one element and is not in array
  EXPECT_FALSE(isValidSubsequence({1, 2, 3, 4}, {5}));

  // Test when array contains duplicate elements
  EXPECT_TRUE(isValidSubsequence({1, 2, 2, 3, 4}, {2, 2, 4}));

  // Test when sequence is longer than the array
  EXPECT_FALSE(isValidSubsequence({1, 2}, {1, 2, 3}));

  // Test when the sequence has duplicate elements not consecutively in array
  EXPECT_TRUE(isValidSubsequence({1, 2, 3, 1, 2, 3}, {1, 2, 3, 3}));
}

TEST(IsValidSubsequenceTest, LargerInputs) {
  // Test with a large array and a small valid sequence
  std::vector<int> largeArray(10000, 1);
  largeArray[9999] = 2;
  EXPECT_TRUE(isValidSubsequence(largeArray, {1, 2}));

  // Test with a large array and a small invalid sequence
  EXPECT_FALSE(isValidSubsequence(largeArray, {2, 1}));

  // Test with a large sequence that is a valid subsequence
  std::vector<int> largeSequence(5000, 1);
  EXPECT_TRUE(isValidSubsequence(largeArray, largeSequence));

  // Test with a large sequence that is not a valid subsequence
  largeSequence.push_back(3);
  EXPECT_FALSE(isValidSubsequence(largeArray, largeSequence));
}

TEST(IsValidSubsequenceTest, RandomCases) {
  // Test with random values
  EXPECT_TRUE(isValidSubsequence({5, 1, 22, 25, 6, -1, 8, 10}, {1, 6, -1, 10}));
  EXPECT_FALSE(isValidSubsequence({5, 1, 22, 25, 6, -1, 8, 10}, {1, 6, 10, -1}));
  EXPECT_TRUE(isValidSubsequence({5, 1, 22, 25, 6, -1, 8, 10}, {5, 25, 8}));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
