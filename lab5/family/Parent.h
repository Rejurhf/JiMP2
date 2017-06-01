//
// Created by Rejurhf on 02.04.2017.
//

#ifndef JIMP_EXERCISES_PARENT_H
#define JIMP_EXERCISES_PARENT_H

#include "Child.h"


class Parent {
    friend class Child;
public:
    Parent(std::string name, std::string surname, int age);
    void SetChild(Child &child);
    void ChangeSchool(std::string school);
private:
    std::string name_;
    std::string surname_;
    int age_;
    Child *child_;
};

#endif //JIMP_EXERCISES_PARENT_H
