//
// Created by Student on 01/06/17.
//

#include "ArabicToRoman.h"

namespace arabicroman{
    void TimesAddToRomanRemoveFromArabic(string &roman, string character, int &arabic, int number){
        int tmp = 0;
        tmp = arabic / number;
        arabic -= tmp * number;
        for(int i = 0; i < tmp; ++i)
           roman += character;
    }

    void AddToRomanRemoveFromArabic(string &roman, string character, int &arabic, int number){
        arabic -= number;
        roman += character;
    }

    string ConversionToRoman(int value) {
        string roman = "";
        int arabic = value;
        if(arabic > 3999)
            return "error";
        while(arabic > 0) {
            if (arabic >= 1000)
                TimesAddToRomanRemoveFromArabic(roman, "M", arabic, 1000);
            else if (arabic >= 900)
                AddToRomanRemoveFromArabic(roman, "CM", arabic, 900);
            else if (arabic >= 500)
                AddToRomanRemoveFromArabic(roman, "D", arabic, 500);
            else if (arabic >= 400)
                AddToRomanRemoveFromArabic(roman, "CD", arabic, 400);
            else if (arabic >= 100)
                TimesAddToRomanRemoveFromArabic(roman, "C", arabic, 100);
            else if (arabic >= 90)
                AddToRomanRemoveFromArabic(roman, "XC", arabic, 90);
            else if (arabic >= 50)
                AddToRomanRemoveFromArabic(roman, "L", arabic, 50);
            else if (arabic >= 40)
                AddToRomanRemoveFromArabic(roman, "XL", arabic, 40);
            else if (arabic >= 10)
                TimesAddToRomanRemoveFromArabic(roman, "X", arabic, 10);
            else if (arabic == 9)
                AddToRomanRemoveFromArabic(roman, "IX", arabic, 9);
            else if (arabic >= 5)
                AddToRomanRemoveFromArabic(roman, "V", arabic, 5);
            else if (arabic == 4)
                AddToRomanRemoveFromArabic(roman, "IV", arabic, 4);
            else
                TimesAddToRomanRemoveFromArabic(roman, "I", arabic, 1);
        }
        return roman;
    }
}
