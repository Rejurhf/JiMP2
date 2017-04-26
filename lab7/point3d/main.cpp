//
// Created by Rejurhf on 24.04.2017.
//

#include "Point.h"
#include "Point3D.h"

//Odpowiedzi w pliku Point3D.h

int main(){
    Point3D p1 = {1, 2, 3};
    Point3D p2 = {4, 5, 6};
    Point p3 = {7, 8};
    std::cout<<"Odlaeglosc miedzy p1 i p2 to: "<<p1.Distance(p2)<<std::endl;
    std::cout<<"Odlaeglosc miedzy p1 i p3 to: "<<p3.Distance(p1)<<std::endl;
    std::cout<<p1;
    return 0;
}