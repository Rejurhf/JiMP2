//
// Created by Rejurhf on 28.03.2017.
//

#include <iostream>
#include "Point.h"

int main(){
    Pointt p1 = Pointt(0, 0);
    Pointt p2 = Pointt(1, 0);
    p1.ToString(&std::cout);
    std::cout<<" ";
    p2.ToString(&std::cout);
    std::cout<<std::endl<<"Odlaeglosc miedzy nimi to: "<<p1.Distance(p2)<<std::endl;
    return 0;
}