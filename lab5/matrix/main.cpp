//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include "Matrix.h"

using  algebra::Matrix;

int main(){
    std::cout<<"Start"<<std::endl;
    Matrix m("[1 2 3;3 4 5; 2 3 4]");
    m.Print();
    return 0;
}