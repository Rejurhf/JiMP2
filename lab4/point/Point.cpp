//
// Created by Rejurhf on 22.03.2017.
//

#include <cmath>
#include <ostream>
#include <iostream>
#include <string>
#include "Point.h"

class String;

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

/* Aby wskazać, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasięgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne są inicjowane
//nim zostanie wywołane ciało konstruktora
Point::Point():x_(0),y_(0){
    std::cout << "Konstruktor bezparametrowy" << endl;
}

Point::Point(double x, double y){
    std::cout << "Konstruktor parametrowy" << endl;
    x_ = x;
    this->y_ = y;
}

Point::~Point(){
    std::cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
    std::cout << endl;
}

double GetX() const{
    return x_;
}

double GetY() const;

double Point::Distance(const Point &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

void Point::ToString(ostream *out) const{
    (*out) << "(" << GetX() << ";" << GetY() << ")";
}

std::string Point::ToString() const{
    std::string text = "(";
    text = text + ";" + ")";
    return text;
}