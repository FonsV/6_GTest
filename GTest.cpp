#include <gtest/gtest.h>

// Code under test
int Add(int a, int b) {
    //return a + b;
    return a + abs(b);
}

// Test cases
TEST(AddTest, HandlesPositiveNumbers) {
    EXPECT_EQ(Add(1, 2), 3);
}

TEST(AddTest, HandlesNegativeNumbers) {
    EXPECT_EQ(Add(-1, -2), -3);
}

// Main function for Google Test
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
