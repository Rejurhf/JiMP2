//
// Created by Student on 01/06/17.
//

#include "ArabicToRoman.h"

namespace arabicroman{
    void Times(string)

    string ConversionToRoman(int value) {
        string roman = "";
        int arabic = value, tmp;
        while(arabic > 1){
            tmp = 0;
            if(arabic >= 1000){
                tmp = arabic / 1000;
                arabic -= tmp * 1000;
                Times(roman, tmp);
            }else if(arabic >= 900){
                arabic -= 900;
                roman += "CM";
            }else if(arabic >= 500){
                arabic -= 500;
                arabic
            }
        }
        return roman;
    }
}
