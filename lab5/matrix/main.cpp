//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include "Matrix.h"

using  algebra::Matrix;

int main(){
    std::cout<<"Start"<<std::endl;
    Matrix m("[1i3 2i5 3; 3 4 5; 6 7 8]");
    m.Print();
    return 0;
}