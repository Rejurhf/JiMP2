//
// Created by Rejurhf on 22.03.2017.
//

#include <iostream>
#include "Point.h"

int main(){
    Point p1 = Point(0, 0);
    Point p2 = Point(1, 0);
    p1.ToString(&std::cout);
    std::cout<<" ";
    p2.ToString(&std::cout);
    std::cout<<std::endl<<"Odlaeglosc miedzy nimi to: "<<p1.Distance(p2)<<std::endl;
    return 0;
}