//
// Created by Rejurhf on 24.04.2017.
//

#include "Point.h"
#include "Point3D.h"

int main(){
    Point3D p1 = {1, 2, 3};
    Point3D p2 = {4, 5, 6};
    std::cout<<"Odlaeglosc miedzy nimi to: "<<p1.Distance(p2)<<std::endl;
    return 0;
}