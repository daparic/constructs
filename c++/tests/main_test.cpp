#include <gtest/gtest.h>

TEST(MultiplyTests, TestIntegerOne_One) {
    auto addnum = [](int a, int b) { return a + b; };
    const auto expected = 69;
    const auto actual = addnum(42, 13) + 14;
    ASSERT_EQ(expected, actual);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
