//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_POINT3D_H
#define JIMP_EXERCISES_POINT3D_H

#include "Point.h"

class Point3D: public Point {
public:
    Point3D(double x, double y, double z = 0): Point(x, y), z_(z){
        std::cout<<"Constructor Point3D ("<<x<<","<<y<<","<<z<<")"<<std::endl;
    };
    /*
    Konstruktor 2D uruchomi się pierwszy ponieważ Point jest klasą nadrzędną i musi istnieć żeby Point3D mógł powstać
     */
    ~Point3D();
    /*
    Destruktor 3D wywoła się pierwszy ponieważ jest niżej w chierarchi i mozna ją odciąć bez wycieków pamięci a
     następnie jak pamięć Point3D będzie zwolniona będzie można zwolnić pamięć Point, gdzyby ~Point wykonał się pierwszy
     mogłoby dojsc do błędów jako że Point3D nie może bez niej istnieć i nie moglibyśmy poprawinie zwolnić pamięci po z_
    */
    double GetZ() const{return z_;}
    double Distance(const Point3D &other) const;
private:
    double z_;
};

/*
    Zadanie 6
    Klasa Point3D dziedziczy i ma z klasą Point wspólne zmienne, więc zostały pobrane x i y, a z pominięte dlatego nie
    wystąpił żaden konflikt(bo zmienna z nie występuje w klasie Point). Klasa Point3D ma też wszystkie możliwości klasy
    Point

    Zadanie 7
    Klasa Point3D dziedziczy po klasie Point więc ma dostęp do jej metod i przeciążeń. Dlatego to przeciążenie działa
    i wypisuje x i y.
 */
#endif //JIMP_EXERCISES_POINT3D_H
