//
// Created by Student on 27/04/17.
//

#include <regex>
#include "Pesel.h"

namespace academia {
    void Pesel::validatePESEL(const string pesel) {
        if(pesel.size() != 11)
            throw InvalidPeselLength();
        std::regex pattern{R"((\d{11}))"};
        string line{pesel};
        std::smatch match;
    }
}
