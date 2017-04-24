//
// Created by Rejurhf on 10.04.2017.
//

#include "Iterator.h"

Iterator::Iterator(vector<string> &v1, vector<int> &v2) {
    this->v1_ = v1;
    this->v2_ = v2;
    this->index_ = 0;
}
bool operator!=(const Iterator &item){}