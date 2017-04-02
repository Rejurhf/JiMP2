//
// Created by Rejurhf on 02.04.2017.
//

#ifndef JIMP_EXERCISES_CHILD_H
#define JIMP_EXERCISES_CHILD_H

#include <string>

class Child{
public:
    Child(std::string name, std::string surname, int age, std::string school);
    std::string GetSchool() const;
    void SetSchool(std::string school);
private:
    std::string name_;
    std::string surname_;
    std::string school_;
    int age_;
};

#endif //JIMP_EXERCISES_CHILD_H
