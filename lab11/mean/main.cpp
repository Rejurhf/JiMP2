//
// Created by Student on 18/05/17.
//

#include <iostream>
#include <complex>
#include "Mean.h"

//using namespace std;
using std::vector;
using std::cout;
using std::endl;
using std::operator""i;

int main(){
    vector<int> intVector {1,2,3,4,5,6};
    int intResoult = Mean(intVector);
    cout<<intResoult<<endl;
    vector<double> doubleVector {1.3,2.6,3.7,4.2,5.5,6.4};
    double doubleResoult = Mean(doubleVector);
    cout<<doubleResoult<<endl;
    vector<std::complex<double>> complexVector {{1.1,2.9},{3.7,4.6},{5.5,6.4}, 4.5+3.4i};
    std::complex<double> complexResoult = Mean(complexVector);
    cout<<complexResoult<<endl;
}