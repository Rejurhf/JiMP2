//
// Created by Rejurhf on 15.03.2017.
//

#include <iostream>
#include "Polybius.h"

std::string CharCode(int character){
    if(character == 32)
        return "";
    std::string number = "";
    if(character > 90)
        character -= 32;
    if(character < 74)
        ++character;
    character -= 66;
    number += std::to_string((character / 5) + 1) + std::to_string((character % 5) + 1);
    return number;
}

std::string PolybiusCrypt(std::string message){
    std::string encripted = "";
    const char *characters = message.c_str();
    int i = 0;
    while(characters[i] != '\0'){
        int ch = characters[i];
        encripted += CharCode(ch);
        ++i;
    }
    return encripted;
}

std::string AsciiCode(int row, int col){
    int ascii = 96;
    std::string character;
    if(row < 3){
        if(row == 2 && col == 5)
            return "k";
        else{
            ascii += col + (row - 1) * 5;
        }
    } else{
        ascii += col + (row - 1) * 5 + 1;
    }
    character = ascii;
    return character;
}

std::string PolybiusDecrypt(std::string crypted){
    std::string decripted = "";
    const char *characters = crypted.c_str();
    int i = 0, pom1, pom2;
    while(characters[i] != '\0'){
        pom1 = characters[i] - '0';
        pom2 = characters[i+1] - '0';
        decripted += AsciiCode(pom1, pom2);
        i += 2;
    }
    return decripted;
}