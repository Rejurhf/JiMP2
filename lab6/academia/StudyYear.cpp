//
// Created by Rejurhf on 10.04.2017.
//

#include "StudyYear.h"

namespace academia{
    StudyYear::StudyYear(int year){
        year_ = year;
    }

    StudyYear &StudyYear::operator++() {
        ++year_;
        return *this;
    };

    StudyYear &StudyYear::operator--() {
        --year_;
        return *this;
    };

    StudyYear StudyYear::setYear(int year) {
        this->year_ = year;
    }
}