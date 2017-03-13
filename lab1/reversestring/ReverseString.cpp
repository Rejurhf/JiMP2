//
// Created by Rejurhf on 13.03.2017.
//

#include <iostream>
#include "ReverseString.h"

std::string reverse(std::string str){
    const char *characters = str.c_str();
    size_t size = str.size();
    if(characters[size-1] == '\0') return "";
    std::string restr;
    restr = characters[size-1];
    str.pop_back();
    return restr + reverse(str);
}
