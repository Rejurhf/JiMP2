//
// Created by Rejurhf on 22.03.2017.
//

#include "Point.h"

int main(){
    Point p1 = new Point(0, 0);
    Point p2 = new Point(1, 1);
    std::cout<<"Odległosc miedzy " + p1.ToString() + " i "
               + p1.ToString() + " to " + p1.Distance(p2)<<std::endl;
    return 0;
}