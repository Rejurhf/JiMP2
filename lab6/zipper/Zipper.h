//
// Created by Rejurhf on 10.04.2017.
//

#ifndef JIMP_EXERCISES_ZIPPER_H
#define JIMP_EXERCISES_ZIPPER_H

#include "Iterator.h"
#include <vector>
#include <string>
#include <tuple>
#include <utility>

namespace datastructures {
    using std::string;
    using std::vector;
    using std::pair;
    using std::tuple;

    class Zipper {
    public:
        static tuple<string, int> zip
                (vector<string> &v1, vector<int> &v2);

        Iterator end();
        Iterator begin();
    private:
        Iterator item_;
    };

}

#endif //JIMP_EXERCISES_ZIPPER_H
