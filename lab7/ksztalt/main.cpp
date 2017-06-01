//
// Created by Rejurhf on 24.04.2017.
//

#include "Ksztalt.h"
#include <random>
#include <list>
#include <iostream>

int main(){
    srand(time(NULL));
    std::list<Ksztalt*> ksztalty;
    for (int i = 0; i < 10; ++i) {
        switch(rand() % 3){
            case 0: {
                Trojkat t;
                ksztalty.emplace_back(&t);
            }
                break;
            case 1: {
                Kwadrat kw;
                ksztalty.emplace_back(&kw);
            }
                break;
            case 2: {
                Kolo ko;
                ksztalty.emplace_back(&ko);
            }
                break;
            default:
                std::cout<<"Error"<<std::endl;
        }
    }
    for(auto v: ksztalty){
        v->rysuj();
    }
    return 0;
}