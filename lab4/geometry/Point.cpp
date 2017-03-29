//
// Created by Rejurhf on 22.03.2017.
//

#include <cmath>
#include <iostream>
#include "Point.h"

namespace geometry {
    using ::std::ostream;
    using ::std::endl;
    using ::std::cout;
    using ::std::pow;
    using ::std::sqrt;

    Point::Point() : x_(0), y_(0) {
        cout << "Konstruktor bezparametrowy" << endl;
    }

    Point::Point(double x, double y) {
        cout << "Konstruktor parametrowy" << endl;
        x_ = x;
        y_ = y;
    }

    Point::~Point() {
        cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
        cout << endl;
    }

    double Point::Distance(const Point &other) const {
        return sqrt(pow(GetX() - other.GetX(), 2) + pow(GetY() - other.GetY(), 2));
    }

    void Point::ToString(ostream *out) const {
        (*out) << "(" << GetX() << ";" << GetY() << ")";
    }
}