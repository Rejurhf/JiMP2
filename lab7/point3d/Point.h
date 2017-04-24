//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_POINT_H
#define JIMP_EXERCISES_POINT_H

#include <iostream>

class Point {
public:
    Point(double x = 0, double y = 0): x_(x), y_(y){                    //Włącza się konstruktor 2D
        std::cout<<"Constructor Point2D ("<<x<<","<<y<<")"<<std::endl;
    };
    ~Point();                                                           //Włącza się destruktor 2D
    void ToString(std::ostream *out) const;
    double Distance(const Point &other) const;
    double GetX() const{return x_;};
    double GetY() const{return y_;};
    void SetX(double x);
    void SetY(double y);
protected:
    double x_, y_;
};

std::istream& operator>>(std::istream &is, Point& point);
std::ostream& operator<<(std::ostream &is, const Point& point);

#endif //JIMP_EXERCISES_POINT_H
