//
// Created by Rejurhf on 24.04.2017.
//

#include "Point3D.h"
#include <cmath>

double Point3D::Distance(const Point3D &other) const {
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2)+pow(GetZ()-other.GetZ(),2));
}

Point3D::~Point3D() {
    std::cout<<"Destruktor 3D ("<<x_<<","<<y_<<","<<z_<<")"<<std::endl;
}
