//
// Created by Rejurhf on 22.03.2017.
//

#include <cmath>
#include <ostream>
#include <iostream>
#include "Point.h"

using ::std::ostream;
using ::std::endl;
using ::std::cout;
using ::std::pow;
using ::std::sqrt;

/* Aby wskazać, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasięgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne są inicjowane
//nim zostanie wywołane ciało konstruktora
Pointt::Pointt():x_(0),y_(0){
    cout << "Konstruktor bezparametrowy" << endl;
}

Pointt::Pointt(double x, double y){
    cout << "Konstruktor parametrowy" << endl;
    x_ = x;
    y_ = y;
}

Pointt::~Pointt(){
    cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
    cout << endl;
}

double Pointt::GetX() const{
    return x_;
}

double Pointt::GetY() const{
    return y_;
}

void Pointt::SetX(double x){
    this->x_ = x;
}

void Pointt::SetY(double y){
    this->y_ = y;
}

double Pointt::Distance(const Pointt &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

void Pointt::ToString(ostream *out) const{
    (*out) << "(" << GetX() << ";" << GetY() << ")";
}