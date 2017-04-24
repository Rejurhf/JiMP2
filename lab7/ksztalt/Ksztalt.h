//
// Created by Rejurhf on 24.04.2017.
//

#ifndef JIMP_EXERCISES_KSZTALT_H
#define JIMP_EXERCISES_KSZTALT_H

class Ksztalt {
public:
    virtual void rysuj() const = 0;
};

class Trojkat: public Ksztalt{
    Trojkat();
    virtual void rysuj() const override;
};

class Kwadrat: public Ksztalt{
    Kwadrat();
    virtual void rysuj() const override;
};

class Kolo: public Ksztalt{
    Kolo();
    virtual void rysuj() const override;
};

#endif //JIMP_EXERCISES_KSZTALT_H
