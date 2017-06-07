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

    void AddToArabic(int &arabic, int value, int &flag, int position){
        if(flag > position)
            if(value == 1000)
                arabic += 800;
            else if(value == 500)
                arabic += 300;
            else if(value == 100)
                arabic += 80;
            else if(value == 50)
                arabic += 30;
            else if(value == 10)
                arabic += 8;
            else
                arabic += 3;
        else{
            flag = position;
            arabic += value;
        }
    }

    int ConversionToArabic(string value){
        int flag = 0;
        string roman = value;
        int arabic = 0;
        for(int i = 0; i < roman.size(); ++i) {
            if(roman[i] == 'M')
                AddToArabic(arabic, 1000, flag, 0);
            else if(roman[i] == 'D')
                AddToArabic(arabic, 500, flag, 1);
            else if(roman[i] == 'C')
                AddToArabic(arabic, 100, flag, 2);
            else if(roman[i] == 'L')
                AddToArabic(arabic, 50, flag, 3);
            else if(roman[i] == 'X')
                AddToArabic(arabic, 10, flag, 4);
            else if(roman[i] == 'V')
                AddToArabic(arabic, 5, flag, 5);
            else if(roman[i] == 'I')
                AddToArabic(arabic, 1, flag, 6);
        }
        return arabic;
    }
}
