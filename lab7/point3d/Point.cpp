//
// Created by Rejurhf on 24.04.2017.
//

#include "Point.h"
#include <cmath>
#include <ostream>
#include <iostream>
#include <iomanip>

using ::std::ostream;
using ::std::endl;
using ::std::cout;
using ::std::pow;
using ::std::sqrt;
using ::std::istream;
using ::std::ws;

//Odpowiedzi w pliku Point3D.h

Point::~Point() {
    std::cout<<"Destruktor 2D ("<<x_<<","<<y_<<")"<<std::endl;
}

void Point::SetX(double x){
    this->x_ = x;
}

void Point::SetY(double y){
    this->y_ = y;
}

double Point::Distance(const Point &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

void Point::ToString(ostream *out) const{
    (*out) << "(" << GetX() << ";" << GetY() << ")";
    std::istream& operator>>(std::istream &is, Point& point);
}

void CheckNextChar(char c, istream* is) {
    int next_char = is->peek();
    if (next_char != c)
        throw std::runtime_error("invalid character");
    is->ignore();
}

void IgnoreWhitespace(istream* is) {
    (*is) >> ws;
}

double ReadNumber(istream* is) {
    double d;
    (*is) >> d;
    return d;
}

istream& operator>>(istream & input, Point& p){
    CheckNextChar('(', &input);
    p.SetX(ReadNumber(&input));
    CheckNextChar(',', &input);
    IgnoreWhitespace(&input);
    p.SetY(ReadNumber(&input));
    CheckNextChar(')', &input);
    return input;      // Umożliwia cin >> a >> b >> c;
}

std::ostream& operator<<(std::ostream &out, const Point& point){
    out << "(" << point.GetX() << ";" << point.GetY() << ")"<<std::endl;
}