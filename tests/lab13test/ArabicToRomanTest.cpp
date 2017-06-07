//
// Created by mwypych on 01.06.17.
//

#include <gtest/gtest.h>
#include "ArabicToRoman.h"

using namespace arabicroman;

class ArabicRomanTest: public ::testing::Test{
public:
};

TEST_F(ArabicRomanTest, DoConvert1ToI){
    EXPECT_EQ("I", ConversionToRoman(1));
}

TEST_F(ArabicRomanTest, DoConvert2ToII){
    EXPECT_EQ("II", ConversionToRoman(2));
}

TEST_F(ArabicRomanTest, DoConvert3ToIII){
    EXPECT_EQ("III", ConversionToRoman(3));
}

TEST_F(ArabicRomanTest, DoConvert100ToC){
    EXPECT_EQ("C", ConversionToRoman(100));
}

TEST_F(ArabicRomanTest, DoConvert626ToDCXXVI){
    EXPECT_EQ("DCXXVI", ConversionToRoman(626));
}

TEST_F(ArabicRomanTest, DoConvert3798ToMMMDCCXCVIII){
    EXPECT_EQ("MMMDCCXCVIII", ConversionToRoman(3798));
}

TEST_F(ArabicRomanTest, DoConvert888ToDCCCLXXXVIII){
    EXPECT_EQ("DCCCLXXXVIII", ConversionToRoman(888));
}

TEST_F(ArabicRomanTest, DoConvert56ToLVI){
    EXPECT_EQ("LVI", ConversionToRoman(56));
}

TEST_F(ArabicRomanTest, DoConvert1234ToMCCXXXIV){
    EXPECT_EQ("MCCXXXIV", ConversionToRoman(1234));
}

TEST_F(ArabicRomanTest, DoConvert2017ToMMXVII){
    EXPECT_EQ("MMXVII", ConversionToRoman(2017));
}

TEST_F(ArabicRomanTest, DoConvert987ToCMVXXXVII){
    EXPECT_EQ("CMLXXXVII", ConversionToRoman(987));
}

TEST_F(ArabicRomanTest, DoConvert3333ToMMMCCCXXXIII){
    EXPECT_EQ("MMMCCCXXXIII", ConversionToRoman(3333));
}