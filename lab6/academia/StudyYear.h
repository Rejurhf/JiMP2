//
// Created by Rejurhf on 10.04.2017.
//

#ifndef JIMP_EXERCISES_STUDYYEAR_H
#define JIMP_EXERCISES_STUDYYEAR_H

namespace academia {
    class StudyYear {
    public:
        StudyYear(int year);
        StudyYear &operator++();
        StudyYear &operator--();
        StudyYear setYear(int year);
    private:
        int year_;
    };
}

#endif //JIMP_EXERCISES_STUDYYEAR_H