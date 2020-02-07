#include <gtest/gtest.h>
#include "../functions_to_test.cpp"

TEST(EstimatedSqrtTest, ZeroAndNegativeNos) {
    ASSERT_FLOAT_EQ(0.0f, est_sqrt(0.0f));
    EXPECT_FLOAT_EQ(0.0f, est_sqrt(-0.0f));
    EXPECT_FLOAT_EQ(0.0f, est_sqrt(-1.0f));
    EXPECT_FLOAT_EQ(0.0f, est_sqrt(-12431.0f));
    EXPECT_FLOAT_EQ(0.0f, est_sqrt(-0.512432));
}

TEST(EstimatedSqrtTest, PositiveNos) {
    EXPECT_FLOAT_EQ(1.0f, est_sqrt(1.0f));
    EXPECT_FLOAT_EQ(4.0f, est_sqrt(16.0f));
    EXPECT_FLOAT_EQ(37.688f, est_sqrt(1420.421f));
    EXPECT_FLOAT_EQ(0.71582f, est_sqrt(0.5124f));
}   

TEST(GoodSqrtTest, ZeroAndNegativeNos) {
    ASSERT_FLOAT_EQ(0.0f, good_sqrt(0.0f));
    EXPECT_FLOAT_EQ(0.0f, good_sqrt(-0.0f));
    EXPECT_FLOAT_EQ(0.0f, good_sqrt(-1.0f));
    EXPECT_FLOAT_EQ(0.0f, good_sqrt(-12431.0f));
    EXPECT_FLOAT_EQ(0.0f, good_sqrt(-0.512432)); 
}

TEST(GoodSqrtTest, PositiveNos) {
    EXPECT_FLOAT_EQ(1.0f, good_sqrt(1.0f));
    EXPECT_FLOAT_EQ(4.0f, good_sqrt(16.0f));
    EXPECT_FLOAT_EQ(37.688f, good_sqrt(1420.421f));
    EXPECT_FLOAT_EQ(0.71582f, good_sqrt(0.5124f));
}   

// TEST(StringConcatenationTest, EmptyStrings) {
//     ASSERT_STREQ("", stringConcat("", "").c_str);
// }

// TEST(StringConcatenationTest, EntirelyAlphanumeric) {
//     EXPECT_STREQ("00", stringConcat("0", "0").c_str);
//     EXPECT_STREQ("Hello, World!", stringConcat("Hello, ", "World!").c_str);
//     EXPECT_STREQ("joinedcharacters", stringConcat("joined", "characters").c_str);
    
// }

// TEST(StringConcatenationTest, SpecialCharacters) {
//     EXPECT_STREQ("Joined.!Specials", stringConcat("Joined.", "!Specials").c_str);
//     EXPECT_STREQ("\n\t", stringConcat("\n", "\t").c_str);    
// }

TEST(TwototheTest, NegativeAndZeroNos) {
    ASSERT_EQ(0, twotothe(0)); // tests 0

    // tests several negative values
    for (int i=-10000; i < 0; i += 10)
    { 
        EXPECT_EQ(0, twotothe(i));
    }
}

TEST(TwototheTest, PositiveNos) {
    EXPECT_EQ(2, twotothe(1));
    EXPECT_EQ(1024, twotothe(10));
    EXPECT_EQ(8388608, twotothe(23)); 
    // make it overload int
    EXPECT_EQ(4294967296, twotothe(32));
}