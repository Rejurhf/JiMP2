//
// Created by Rejurhf on 22.03.2017.
//

#ifndef JIMP_EXERCISES_POINT_H
#define JIMP_EXERCISES_POINT_H

class Pointt {
    public:
        //Konstruktor bezparametrowy
        Pointt();
        //Konstruktor parametrowy
        Pointt(double x, double y);
        //Destruktor wykonywany przed zwolnieniem pamięci
        ~Pointt();

        //Metody nie modyfikujące stanu obiektu (const na końcu metody)
        //nie mogą zmodyfikować tego obiektu.
        void ToString(std::ostream *out) const;
        double Distance(const Pointt &other) const;

        //metody akcesorów są publiczne i tylko w przy ich pomocy
        //można się dostać z zewnątrz do pól klasy
        double GetX() const;
        double GetY() const;

        //metody seterów pozwalające zmienić stan obiektu
        //po jego zainicjalizowaniu
        void SetX(double x);
        void SetY(double y);
    private:
        //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
        double x_, y_;
};

#endif //JIMP_EXERCISES_POINT_H
