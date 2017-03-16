//
// Created by Rejurhf on 14.03.2017.
//

#include "DoubleBasePalindromes.h"
#include <string>

uint64_t DoubleBasePalindromes(int max_vaule_exculsive){
    uint64_t sum = 0;
    for (int i = 1; i <= max_vaule_exculsive; ++i) {
        if(decy(i) && binar(i)) sum += i;
    }
    return sum;
}

bool decy(int value){
    std::string str = std::to_string(value);
    const char *characters = str.c_str();
    size_t size = str.size();
    int lim = int(size)/2;
    for(int i = 0; i<=lim; ++i){
        if(characters[i] != characters[size-1-i]) return false;
    }
    return true;
}

bool binar(int value){
    if(value % 2 == 0) return false;
    std::string str = "";
    while(value > 0){
        if (value % 2 == 0) str += "0";
        else str += "1";
        value = value / 2;
    }
    const char *characters = str.c_str();
    size_t size = str.size();
    int lim = int(size)/2;
    for(int i = 0; i<=lim; ++i){
        if(characters[i] != characters[size-1-i]) return false;
    }
    return true;
}