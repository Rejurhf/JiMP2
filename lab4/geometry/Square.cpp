//
// Created by Rejurhf on 28.03.2017.
//

#include "Square.h"
#include "Point.h"
#include <ostream>
#include <iostream>

namespace geometry{
    using ::std::cout;
    using ::std::endl;
    Square::Square(Point p1, Point p2, Point p3, Point p4){
        cout<<"Konstruktor parametrowy Sq"<<endl;
        p1_ = p1;
        p2_ = p2;
        p3_ = p3;
        p4_ = p4;
    }
    double Square::Area(){
        bool flag = this->IsSquare();
        cout<<flag<<endl<<endl;
        if(!flag){
            return 0;
        }
        double side = p1_.Distance(p2_);
        return side * side;
    }

    double Square::Circumference(){
        bool flag = this->IsSquare();
        cout<<flag<<endl<<endl;
        if(!flag){
            return 0;
        }
        double side = p1_.Distance(p2_);
        return 4 * side;
    }

    bool Square::IsSquare(){
        if(p1_.Distance(p3_) != p1_.Distance(p2_) or p4_.Distance(p3_) != p4_.Distance(p2_))
            return false;
        return true;
    }
}