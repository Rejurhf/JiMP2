//
// Created by Rejurhf on 03.05.2017.
//

#include "MicroDVDSubtitles.h"
#include <iostream>

using namespace subtitles;

int main(){
    MicroDVDSubtitles s;
    std::stringstream in {"{10}{200}COS TAM\n{260}{300}INNEGO\n"};
    std::stringstream out;
    s.ShiftSubtitlesBy(&in, &out, 1400, 10);
    return 0;
}