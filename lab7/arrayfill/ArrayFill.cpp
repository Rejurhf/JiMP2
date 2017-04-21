//
// Created by Student on 20/04/17.
//

#include "ArrayFill.h"

namespace arrays {
    void FillArray(int size, Filler &filler, std::vector<int> *v) {
        v->clear();
        v->reserve(size);
        for (int i = 0; i < size; i++) {
            v->emplace_back(filler.fill(i));
        }
    }

    int IncrementalFill::fill(int index) {
        return value_a_ * index + value_b_;
    }

    int RandomFill::fill(int index) {
        return distributor_(generator_);
    }
}
