//
// Created by Rejurhf on 10.04.2017.
//

#include "Student.h"

namespace academia{
    Student::Student(string id, string first, string second, string program, int year):
            id_(id), first_name_(first), second_name_(second), program_(program), studyYear_(year) {}

    void Student::setId(string id){
        this->id_ = id;
    }

    void Student::setFirstName(string first_name){
        this->first_name_ = first_name;
    }

    void Student::setSecondName(string second_name){
        this->second_name_ = second_name;
    }

    void Student::setProgram(string program){
        this->program_ = program;
    }

    void Student::setStudyYear(int study_year){
        this->studyYear_.setYear(study_year);
    }

    string Student::getId() const{
        return id_;
    }

    string Student::getFirstName() const{
        return first_name_;
    }

    string Student::getSecondName() const{
        return second_name_;
    }

    string Student::getProgram() const{
        return program_;
    }

    StudyYear Student::getStudyYear() const{
        return studyYear_;
    }

    istream& operator>>(istream &in, Student &s){
        string str;
        in>>s.id_>>s.first_name_>>s.second_name_>>s.program_>>str;
        s.studyYear_.setYear(stoi(str));
    }
}