//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_STUDYYEAR_H
#define JIMP_EXERCISES_STUDYYEAR_H

#include <string>

using ::std::istream;
using ::std::ostream;

namespace academia {
    class StudyYear {
    public:
        StudyYear(int year);
        StudyYear &operator++();
        StudyYear &operator--();
        StudyYear setYear(int year);
        StudyYear getYear() const;
        friend istream &operator>>(istream &in, StudyYear &year);
    private:
        int year_;
    };
    istream &operator>>(istream &in, StudyYear &year);
    ostream &operator<<(ostream &out, const StudyYear &year);
    bool operator>(const StudyYear oneman, const StudyYear otherman );
    bool operator>=(const StudyYear oneman, const StudyYear otherman );
    bool operator<(const StudyYear oneman, const StudyYear otherman );
    bool operator<=(const StudyYear oneman, const StudyYear otherman );
}

#endif //JIMP_EXERCISES_STUDYYEAR_H
