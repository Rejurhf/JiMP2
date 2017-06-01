//
// Created by Student on 20/04/17.
//

#include "ArrayFill.h"

using namespace::arrays;

int main(){
    std::vector<int> vs;
    FillArray(1024, IncrementalFill {77}, &vs);
    return 0;
}