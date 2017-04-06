//
// Created by Rejurhf on 06.04.2017.
//

#include <iomanip>
#include "Student.h"

using ::std::istream;
using ::std::ws;

namespace academia{
    void Student::setId(std::string id){
        this->id_ = id;
    }

    void Student::setFirstName(std::string first_name){
        this->first_name_ = first_name;
    }

    void Student::setSecondName(std::string second_name);
    void Student::setProgram(std::string program);
    void Student::setStudyYear(int study_year);

    void CheckNextChar(char c, istream* is) {
        int next_char = is->peek();
        if (next_char != c) {
            throw std::runtime_error("invalid character");
        }
        is->ignore();
    }

    void IgnoreWhitespace(istream* is) {
        (*is) >> ws;
    }

    double ReadNumber(istream* is) {
        double d;
        (*is) >> d;
        return d;
    }

// Właściwa definicja, obydwa argumenty funkcji nie
//są zadeklarowane jako const, bo obydwa są modyfikowane
//wewnątrz funkcji (STL nie używa naszej konwencji z przekazywaniem
//przez wskaźnik)
    istream& operator>>(istream & input, Student& p){
        CheckNextChar('{', &input);
        p.SetX(ReadNumber(&input));
        CheckNextChar(',', &input);
        IgnoreWhitespace(&input);
        p.SetY(ReadNumber(&input));
        CheckNextChar('}', &input);
        return input;      // Umożliwia cin >> a >> b >> c;
    }
}