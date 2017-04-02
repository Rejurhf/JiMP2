//
// Created by Rejurhf on 02.04.2017.
//

#include <list>
#include <iostream>
#include "Martian.h"

int main(){
    std::list<Martian> martianAttack;
    int killedNumber = 0;
    do{
        martianAttack.push_back(Martian());
        if(Martian::ShouldAttack()){
            Martian::Attack();
            ++killedNumber;
            for (int i = 0; i < killedNumber; ++i) {
                martianAttack.pop_back();
            }
        }else
            Martian::Hide();
    }while(killedNumber<5);
    std::cout<<"All Martians are dead"<<std::endl;
    return 0;
}