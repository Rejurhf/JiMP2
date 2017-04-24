//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_POINT_H
#define JIMP_EXERCISES_POINT_H

#include <iostream>

//Odpowiedzi w pliku Point3D.h

class Point {
public:
    Point(double x = 0, double y = 0): x_(x), y_(y){
        std::cout<<"Constructor Point2D ("<<x<<","<<y<<")"<<std::endl;
    };
    ~Point();
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