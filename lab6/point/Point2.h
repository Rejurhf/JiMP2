//
// Created by Rejurhf on 06.04.2017.
//

#ifndef JIMP_EXERCISES_POINT2_H
#define JIMP_EXERCISES_POINT2_H

class Point {
public:
    //Konstruktor bezparametrowy
    Point();
    //Konstruktor parametrowy
    Point(double x, double y);
    //Destruktor wykonywany przed zwolnieniem pamięci
    ~Point();

    //Metody nie modyfikujące stanu obiektu (const na końcu metody)
    //nie mogą zmodyfikować tego obiektu.
    void ToString(std::ostream *out) const;
    double Distance(const Point &other) const;

    //metody akcesorów są publiczne i tylko w przy ich pomocy
    //można się dostać z zewnątrz do pól klasy
    double GetX() const;
    double GetY() const;

    //metody seterów pozwalające zmienić stan obiektu
    //po jego zainicjalizowaniu
    void SetX(double x);
    void SetY(double y);

    //friend std::istream& operator>>(std::istream &, Point&);
    //friend std::ostream& operator<<(std::ostream &, const Point&);
private:
    //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
    double x_, y_;
};

std::istream& operator>>(std::istream &is, Point& point);
std::ostream& operator<<(std::ostream &is, const Point& point);

#endif //JIMP_EXERCISES_POINT2_H
