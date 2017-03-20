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
        const int maxValue = 24 * 60;
        int i = 0, min = maxValue / 2, tmp;
        int vSize = times.size();
        int *tab = new int[vSize];
        for (std::string v : times) {
            tab[i] = ToMinutes(v);
            ++i;
        }
        for (i = 0; i < vSize; ++i) {
            for (int j = i+1; j < vSize; ++j) {
                if(tab[i] - tab[j] < 0){
                    tmp = tab[j] - tab[i];
                }else{
                    tmp = tab[i] - tab[j];
                }
                if(tmp > maxValue / 2)
                    tmp = maxValue - tmp;
                if(tmp < min)
                    min = tmp;
            }
        }
        delete tab;
        return min;
    }
}