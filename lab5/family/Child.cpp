//
// Created by Rejurhf on 02.04.2017.
//

#include "Child.h"

Child::Child(std::string name, std::string surname, int age, std::string school){
    name_ = name;
    surname_ = surname;
    age_ = age;
    school_ = school;
}

std::string Child::GetSchool() const{
    return school_;
}

void Child::SetSchool(std::string school){
    school_ = school;
}
