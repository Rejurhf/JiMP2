//
// Created by Student on 18/05/17.
//

#ifndef JIMP_EXERCISES_VALUE_H
#define JIMP_EXERCISES_VALUE_H

#include <vector>

template<class T>
T Mean(std::vector<T> v){
    T sum = T();
    for(T u:v){
        sum = sum + u;
    }
    T mean = v.size();
    return sum / mean;
}

#endif //JIMP_EXERCISES_VALUE_H
