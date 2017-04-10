//
// Created by Rejurhf on 10.04.2017.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <string>
#include "StudyYear.h"

using ::std::string;
using ::std::istream;

namespace academia{
    class Student {
    public:
        Student();
        Student(string id, string first, string second, string program, int year);
        void setId(string id);
        void setFirstName(string first_name);
        void setSecondName(string second_name);
        void setProgram(string program);
        void setStudyYear(int study_year);
        string getId() const;
        string getFirstName() const;
        string getSecondName() const;
        string getProgram() const;
        StudyYear getStudyYear() const;

        friend istream& operator>>(istream &in, Student &s);
        friend class StudyYear;
    private:
        std::string id_, first_name_, second_name_, program_;
        StudyYear studyYear_;
    };
    istream& operator>>(istream &in, Student& student);
}

#endif //JIMP_EXERCISES_STUDENT_H
