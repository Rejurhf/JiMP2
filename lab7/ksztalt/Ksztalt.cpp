//
// Created by Rejurhf on 24.04.2017.
//

#include <iostream>
#include "Ksztalt.h"

using std::cout;
using std::endl;

void Trojkat::rysuj() const{
    cout<<"      X      "<<endl
        <<"     X X     "<<endl
        <<"    X   X    "<<endl
        <<"   X     X   "<<endl
        <<"  X       X  "<<endl
        <<" X         X "<<endl
        <<"X X X X X X X"<<endl;
}

void Kwadrat::rysuj() const{
    cout<<"X X X X X X X"<<endl
        <<"X           X"<<endl
        <<"X           X"<<endl
        <<"X           X"<<endl
        <<"X           X"<<endl
        <<"X           X"<<endl
        <<"X X X X X X X"<<endl;
}

void Kolo::rysuj() const{
    cout<<"    X X X    "<<endl
        <<"  X X   X X  "<<endl
        <<"X X       X X"<<endl
        <<"X           X"<<endl
        <<"X X       X X"<<endl
        <<"  X X   X X  "<<endl
        <<"    X X X    "<<endl;
}
