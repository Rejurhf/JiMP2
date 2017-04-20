//
// Created by Student on 20/04/17.
//

#include <vector>
#include "ArrayFill.h"

namespace arrays {
    void FillArray(int size, Filler &filler, std::vector<int> *v) {
        v->clear();
        v->reserve(size);
        for (size_t i = 0; i < size; i++) {
            v->emplace_back(filler.fill(i));
        }
    }

    int IncrementalFill::fill(int index) const {}
}