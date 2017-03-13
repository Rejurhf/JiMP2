//
// Created by Rejurhf on 13.03.2017.
//

#include "Palindrome.h"

bool is_palindrome(std::string str){
    const char *characters = str.c_str();
    size_t size = str.size();
    int lim = int(size)/2;
    for(int i = 0; i<=lim; ++i){
        if(characters[i] != characters[size-1-i]) return false;
    }
    return true;
}
