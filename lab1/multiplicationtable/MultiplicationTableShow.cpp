//
// Created by Rejurhf on 13.03.2017.
//

#include <iostream>
#include "MultiplicationTableShow.h"

void MultiplicationTableShow(int tab[][10]){
    for(int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            std::cout<<tab[i][j]<<" ";
            if(tab[i][j] < 10) std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}