//
// Created by Rejurhf on 24.04.2017.
//

#include <iostream>
#include "Kula.h"

using std::cout;
using std::endl;

void przekroj(Kolo k){
    cout<<"Pole przekroju: "<<k.pole()<<endl;
}

int main(){
    Kolo kolo(2, 2, 2);
    Kula kula(0, 0, 0, 10);
    cout<<"Pole koła: "<<kolo.pole()<<endl;
    cout<<"Pole powierzchni kuli: "<<kula.pole()<<endl;
    przekroj(kula);
    return 0;
}