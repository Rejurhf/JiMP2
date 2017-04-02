//
// Created by Rejurhf on 02.04.2017.
//

#include <list>
#include "Martian.h"

int main(){
    std::list<Martian> martianAttack;
    for (int i = 0; i < 15; ++i) {
        martianAttack.push_back(Martian());
        if(Martian::ShouldAttack()){
            Martian::Attack();
            while(!martianAttack.empty())
                martianAttack.pop_back();
        }else
            Martian::Hide();
    }
    return 0;
}