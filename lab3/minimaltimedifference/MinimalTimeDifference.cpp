//
// Created by Student on 16/03/17.
//

#include "MinimalTimeDifference.h"

namespace minimaltimedifference {
    unsigned int ToMinutes(std::string time_HH_MM) {
        int h, m, time;
        std::regex pattern{R"((\d{1,2}):(\d{2}))"};
        std::string line{time_HH_MM};
        std::smatch matches;
        if (std::regex_match(line, matches, pattern)) {
            h = std::stoi(matches[1]);
            m = std::stoi(matches[2]);
        }
        time = (h * 60) + m;
        return time;
    }

    unsigned int MinimalTimeDifference(std::vector<std::string> times) {
        int vSize = times.size(), i = 0, min = 720, tmp;
        int *tab = new int[vSize];
        for (std::string v : times) {
            tab[i] = ToMinutes(v);
            if(tab[i] > 720)
                tab[i] = 1440 - tab[i];
            ++i;
        }
        for (int j = 0; j < vSize-1; ++j) {
            for (int k = j+1; k < vSize; ++k) {
                if(tab[i] > tab[j]){
                    tmp = tab[i] - tab[j];
                    if (min > tmp)
                        min = tmp;
                }else{
                    tmp = tab[j] - tab[i];
                    if (min > tmp)
                        min = tmp;
                }
            }
        }
        return min;
    }
}