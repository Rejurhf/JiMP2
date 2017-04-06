//
// Created by Rejurhf on 06.04.2017.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <string>

namespace academia {
    class StudyYear {
    public:
        StudyYear &operator++(){
            ++year_;
            return *this;
        };

        StudyYear &operator--(){
            --year_;
            return *this;
        };
    private:
        int year_;
    };

    class Student {
    public:
        Student();
        void setId(std::string id);
        void setFirstName(std::string first_name);
        void setSecondName(std::string second_name;
        void setProgram(std::string program);
        void setStudyYear(int study_year);

        friend std::istream& operator>>(std::istream &, Student&);
    private:
        std::string id_, first_name_, second_name_, program_;
        StudyYear studyYear_;
    };
    std::istream& operator>>(std::istream &in, Student& student);
}

#endif //JIMP_EXERCISES_STUDENT_H
