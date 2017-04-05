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
    m.print();

    w = m.getElem(1, 2);
    cout<<w<<endl;
    w1 = 1 + 5i;
    m.changeValue(1, 2, w1);
    w = m.getElem(1, 2);
    cout<<w<<endl;
*/
    Matrix m1("[1 2 3;3 4 5; 2 3 4]");
    cout<<"Matrix m1:"<<endl;
    m1.print();
    Matrix m2("[3 2 1; 5 4 3; 7 6 5]");
    cout<<"Matrix m2:"<<endl;
    m2.print();
    /*
    Matrix sum = m1.add(m2);
    cout<<"Matrix sum:"<<endl;
    sum.print();
    Matrix sub = m1.subtract(m2);
    cout<<"Matrix subtract:"<<endl;
    sub.print();
    cout<<"Matrix m1:"<<endl;
    m1.print();
    cout<<"Matrix m2:"<<endl;
    m2.print();
     */
    Matrix multi = m1.multiply(m2);
    cout<<"Matrix multi:"<<endl;
    multi.print();
    return 0;
}