//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include "Martian.h"

int Martian::numberOfMartian_ = 0;

Martian::Martian() {
    numberOfMartian_ += 2;
}

Martian::~Martian() {
    numberOfMartian_--;
}

bool Martian::ShouldAttack() {
    std::cout<<numberOfMartian_<<std::endl;
    if(Martian::numberOfMartian_ > 4)
        return true;
    return false;
}

void Martian::Attack() {
    std::cout<<"Attack!!!"<<std::endl;
}

void Martian::Hide() {
    std::cout<<"Hide"<<std::endl;
}