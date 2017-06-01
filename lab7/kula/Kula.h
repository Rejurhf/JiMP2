//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_KULA_H
#define JIMP_EXERCISES_KULA_H

class Kolo{
public:
    Kolo(double x, double y, double r): x_(x), y_(y), r_(r){};
    double pole() const;
protected:
    double x_, y_, r_;
};

class Kula: public Kolo{
public:
    Kula(double x, double y, double z, double r): Kolo(x, y, r), z_(z){};
    double pole() const;
protected:
    double z_;
};

#endif //JIMP_EXERCISES_KULA_H
