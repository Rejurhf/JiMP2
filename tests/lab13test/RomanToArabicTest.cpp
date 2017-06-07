//
// Created by mwypych on 01.06.17.
//

#include <gtest/gtest.h>
#include "ArabicToRoman.h"

using namespace arabicroman;

class RomanArabicTest: public ::testing::Test{
public:
};

TEST_F(RomanArabicTest, DoConvertITo1){
    EXPECT_EQ(1, ConversionToArabic("I"));
}

TEST_F(RomanArabicTest, DoConvertIITo2){
    EXPECT_EQ(2, ConversionToArabic("II"));
}

TEST_F(RomanArabicTest, DoConvertIIITo3){
    EXPECT_EQ(3, ConversionToArabic("III"));
}

TEST_F(RomanArabicTest, DoConvertCTo100){
    EXPECT_EQ(100, ConversionToArabic("C"));
}

TEST_F(RomanArabicTest, DoConvertDCXXVITo626){
    EXPECT_EQ(626, ConversionToArabic("DCXXVI"));
}

TEST_F(RomanArabicTest, DoConvertMMMDCCXCVIIITo3798){
    EXPECT_EQ(3798, ConversionToArabic("MMMDCCXCVIII"));
}

TEST_F(RomanArabicTest, DoConvertDCCCLXXXVIIITo888){
    EXPECT_EQ(888, ConversionToArabic("DCCCLXXXVIII"));
}

TEST_F(RomanArabicTest, DoConvertLVITo56){
    EXPECT_EQ(56, ConversionToArabic("LVI"));
}

TEST_F(RomanArabicTest, DoConvertMCCXXXIVTo1234){
    EXPECT_EQ(1234, ConversionToArabic("MCCXXXIV"));
}

TEST_F(RomanArabicTest, DoConvertMMXVIITo2017){
    EXPECT_EQ(2017, ConversionToArabic("MMXVII"));
}

TEST_F(RomanArabicTest, DoConvertCMLXXXVIITo987){
    EXPECT_EQ(987, ConversionToArabic("CMLXXXVII"));
}

TEST_F(RomanArabicTest, DoConvertMMMCCCXXXIIITo3333){
    EXPECT_EQ(3333, ConversionToArabic("MMMCCCXXXIII"));
}