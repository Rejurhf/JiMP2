//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include "Matrix.h"

using  algebra::Matrix;
using  ::std::cout;
using  ::std::endl;

int main(){
    /*
    std::complex<double> w, w1;
    Matrix m("[1i3 2i5 3; 3 4 5; 6 7 8]");
    cout<<"Matrix m:"<<endl;
    m.Print();

    w = m.GetElem(1, 2);
    cout<<w<<endl;
    w1 = 1 + 5i;
    m.ChangeValue(1, 2, w1);
    w = m.GetElem(1, 2);
    cout<<w<<endl;
*/
    Matrix m1("[1 2 3;3 4 5; 2 3 4]");
    cout<<"Matrix m1:"<<endl;
    m1.Print();
    Matrix m2("[3 2 1; 5 4 3; 7 6 5]");
    cout<<"Matrix m2:"<<endl;
    m2.Print();
//    Matrix sum = m1.Add(m2);
//    cout<<"Matrix sum:"<<endl;
//    sum.Print();
//    cout<<sum.GetElem(0, 0)<<endl;
    Matrix sub = m1.Subtract(m2);
    cout<<"Matrix subtract:"<<endl;
    sub.Print();
    cout<<"Matrix m1:"<<endl;
    m1.Print();
    cout<<"Matrix m2:"<<endl;
    m2.Print();
    return 0;
}