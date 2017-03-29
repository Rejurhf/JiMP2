//
// Created by Rejurhf on 28.03.2017.
//

#ifndef JIMP_EXERCISES_SQUARE_H
#define JIMP_EXERCISES_SQUARE_H

#include "Point.h"

namespace geometry{
    class Square {
    public:
        Square(const Point p1, Point p2, Point p3, Point p4);
        double Area();
        double Circumference();
        bool IsSquare();
    private:
        Point p1_, p2_, p3_, p4_;
    };
}

#endif //JIMP_EXERCISES_SQUARE_H
