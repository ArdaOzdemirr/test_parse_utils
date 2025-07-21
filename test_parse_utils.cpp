#include <gtest/gtest.h>
#include "parse_utils.cpp"

TEST(ParseUtilsTest, ValidInteger) {
    auto result = ParseUtils::parse_int("123");
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ(result.value(), 123);
}

TEST(ParseUtilsTest, InvalidString) {
    auto result = ParseUtils::parse_int("abc");
    EXPECT_FALSE(result.has_value());
}

TEST(ParseUtilsTest, EmptyString) {
    auto result = ParseUtils::parse_int("");
    EXPECT_FALSE(result.has_value());
}

TEST(ParseUtilsTest, OverflowCase) {
    auto result = ParseUtils::parse_int("9999999999999999999999999");
    EXPECT_FALSE(result.has_value());
}

TEST(ParseUtilsTest, NegativeNumber) {
    auto result = ParseUtils::parse_int("-456");
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ(result.value(), -456);
}

TEST(ParseUtilsTest, PartialParse) {
    auto result = ParseUtils::parse_int("123abc");
    EXPECT_FALSE(result.has_value());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
