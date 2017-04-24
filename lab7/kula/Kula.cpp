//
// Created by Rejurhf on 24.04.2017.
//

#include "Kula.h"

double Kolo::pole() const{
    return 3.14 * r_ * r_;
}

double Kula::pole() const{
    return 4 * 3.14 * r_ * r_ *r_ / 3 ;
}