//
// Created by Rejurhf on 24.04.2017.
//

#include "Student.h"

namespace academia{
    Student::Student(string id, string first, string last, string program, int year):
            id_(id), first_name_(first), last_name_(last), program_(program), studyYear_(year) {}

    void Student::setId(string id){
        this->id_ = id;
    }

    void Student::setFirstName(string first_name){
        this->first_name_ = first_name;
    }

    void Student::setLastName(string second_name){
        this->last_name_ = second_name;
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

    string Student::getLastName() const{
        return last_name_;
    }

    string Student::getProgram() const{
        return program_;
    }

    StudyYear Student::getStudyYear() const{
        return studyYear_;
    }

    istream& operator>>(istream &in, Student &student){
        string str;
        in>>student.id_>>student.first_name_>>student.last_name_>>student.program_>>str;
        student.studyYear_.setYear(stoi(str));
    }

    ostream& operator<<(ostream &out, const Student &student){
        out <<student.getId() << "First name: " << student.getFirstName()
            << "Last name: " << student.getLastName() << "Program: " << student.getProgram()
            << "Year: " << student.getStudyYear();
    }

    bool operator==(const Student student, const Student student2){
        return (student.id_ == student2.id_)
    }

    bool operator==(const Student student, string id_str){
        return (student.id_ == id_str);
    }

    bool operator<(const Student student, const Student student2){
        return (student.id_ < student2.id_);
    }
}