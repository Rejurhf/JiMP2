//
// Created by Rejurhf on 24.04.2017.
//

#include "Ksztalt.h"
#include <random>
#include <list>

using std::list;

int main(){
    srand(time(NULL));
    Trojkat *t;
    Kolo *ko;
    Kwadrat *kw;
    list<Ksztalt> ksztalty;
    for (int i = 0; i < 10; ++i) {
        switch(rand() % 3){
            case 0:
                ksztalty.emplace_back(t);
                break;
            case 1:
                ksztalty.emplace_back(kw);
                break;
            case 2:
                ksztalty.emplace_back(ko);
                break;
        }
    }
    for(list<Ksztalt>::iterator i = ksztalty.begin(); i != ksztalty.end(); ++i){
        (*i).rysuj();
    }
    return 0;
}