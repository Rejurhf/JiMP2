//
// Created by Rejurhf on 03.05.2017.
//

#include "MovieSubtitles.h"
#include <iostream>

using namespace moviesubs;

int main(){
    MicroDvdSubtitles s;
    std::stringstream in {"{10}{200}COS TAM\n{260}{300}INNEGO\n"};
    std::stringstream out;
    s.ShiftAllSubtitlesBy(1400, 10, &in, &out);
    return 0;
}