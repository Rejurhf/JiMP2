//
// Created by Student on 18/05/17.
//

#include <iostream>
#include <complex>
#include "Sum.h"

using std::cout;
using std::endl;

int main(){
    int intResoult = Sum(1, 2);
    cout<<intResoult<<endl;
    double doubleResoult = Sum<double>(3, 4.9);
    cout<<doubleResoult<<endl;
    std::complex<double> complexResoult = Sum(3.7, 5.8);
    cout<<complexResoult<<endl;
}