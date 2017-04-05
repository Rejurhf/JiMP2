//
// Created by Rejurhf on 02.04.2017.
//

#ifndef JIMP_EXERCISES_MARTIAN_H
#define JIMP_EXERCISES_MARTIAN_H

class Martian{
public:
    static int numberOfMartian_;
    Martian();
    ~Martian();
    static bool ShouldAttack();
    static void Attack();
    static void Hide();
};

#endif //JIMP_EXERCISES_MARTIAN_H
