//
// Created by Rejurhf on 06.04.2017.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <string>

namespace academia {
    struct StudyYear {
        int year;
    };

    class Student {
    public:
        Student();
        friend Student &operator++();
        friend Student operator(int);
    private:
        std::string id_, first_name_, second_name_, program_;
        StudyYear yera_;
    };
}

Student &operator++();
Student operator(int);
#endif //JIMP_EXERCISES_STUDENT_H
