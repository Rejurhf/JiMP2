//
// Created by Rejurhf on 15.03.2017.
//

#include <iostream>
#include "Polybius.h"

int main(){
    std::cout<<"Wiadomosc zaszyfrowana: "<<PolybiusCrypt("Wiadomosc")<<std::endl;
    std::cout<<"Wiadomosc odszyfrowana: "<<PolybiusDecrypt("522411143432344313");
    return 0;
}