#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

TEST(TwoNumberSumTest, BasicTest) {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto result = twoNumberSum(nums, target);
    ASSERT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 7);
}

TEST(TwoNumberSumTest, NoSolutionTest) {
    std::vector<int> nums = {1, 2, 3, 4};
    int target = 8;
    auto result = twoNumberSum(nums, target);
    EXPECT_TRUE(result.empty());
}

TEST(TwoNumberSumTest, MultiplePairsTest) {
    std::vector<int> nums = {3, 5, -4, 8, 11, 1, -1, 6};
    int target = 10;
    auto result = twoNumberSum(nums, target);
    ASSERT_EQ(result.size(), 2);
    EXPECT_TRUE((result[0] == -1 && result[1] == 11) || (result[0] == 11 && result[1] == -1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
