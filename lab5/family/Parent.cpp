//
// Created by Rejurhf on 02.04.2017.
//

#include "Parent.h"

Parent::Parent(std::string name, std::string surname, int age){
    name_ = name;
    surname_ = surname;
    age_ = age;
    child_ = nullptr;
}

void Parent::SetChild(Child &child){
    child_ = &child;
}

void Parent::ChangeSchool(std::string school){
    child_->SetSchool(school);
}