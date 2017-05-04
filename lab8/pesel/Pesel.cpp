//
// Created by Student on 27/04/17.
//

#include <regex>
#include "Pesel.h"

namespace academia {
    void Pesel::validatePESEL(const string &pesel) {
        if(pesel.size() != 11)
            throw InvalidPeselLength(pesel, int(pesel.size()));

        for (int i = 0; i < pesel.size(); ++i) {
            if (pesel[i] < '0' or pesel[i] > '9') {
                throw InvalidPeselCharacter(pesel);
            }
        }

        //9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×j
        int tab[] = {9,7,3,1,9,7,3,1,9,7};
        int sum = 0;
        for (int i = 0; i < pesel.size(); ++i){
            sum += tab[i] * (pesel[i] - '0');
        }
        sum = sum % 10;
        if(sum != (pesel[pesel.size()-1] - '0'))
            throw InvalidPeselChecksum(pesel, sum);
    }
}
