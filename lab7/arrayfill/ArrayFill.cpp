//
// Created by Student on 20/04/17.
//

#include "ArrayFill.h"

namespace arrays {
    void FillArray(int size, const Filler &filler, std::vector<int> *v) {
        v->clear();
        v->reserve(size);
        for (int i = 0; i < size; i++) {
            v->emplace_back(filler.fill(i));
        }
    }

    int IncrementalFill::fill(int index) const{
        return value_multiply_ * index + value_start_;
    }

    int RandomFill::fill(int index) const{
        return (*distributor_)(*generator_);
    }

    int SquaredFill::fill(int index) const{
        return value_multiply_ * index * index + value_start_;
    }

    int UniformFill::fill(int index) const{
        return value_;
    }
}
