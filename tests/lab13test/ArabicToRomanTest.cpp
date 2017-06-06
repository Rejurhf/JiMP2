//
// Created by mwypych on 01.06.17.
//

#include <gtest/gtest.h>
#include "ArabicToRoman.h"

using namespace arabicroman;

class ArabicRomanTest: public ::testing::Test{
public:
};

TEST_F(ArabicRomanTest, DoConvertOneToI){
    EXPECT_EQ("I", ConversionToRoman(1));
}

TEST_F(ArabicRomanTest, DoConvertTwoToII){
    EXPECT_EQ("II", ConversionToRoman(2));
}