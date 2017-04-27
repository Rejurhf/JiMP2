//
// Created by Student on 27/04/17.
//

#include <altivec.h>
#include "Pesel.h"


namespace academia {
    void Pesel::validatePESEL(const string pesel) {
        if(pesel.size() != 11)
            throw InvalidPeselLength();

    }
}
