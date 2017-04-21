//
// Created by Student on 20/04/17.
//

#ifndef JIMP_EXERCISES_ARRAYFILL_H
#define JIMP_EXERCISES_ARRAYFILL_H

#include <vector>
#include <random>

namespace arrays {
    class Filler{
    public:
        virtual int fill(int index) = 0;
    };

    class IncrementalFill : public Filler {
    public:
        IncrementalFill(int val):value_b_(val), value_a_(1){};
        IncrementalFill(int val_a, int val_b):value_a_(val_b), value_b_(val_a){};
        int fill(int index) override;
    private:
        int value_a_;
        int value_b_;
    };

    class RandomFill : public Filler{
    public:
        RandomFill(std::default_random_engine generator, std::uniform_int_distribution<int> distributor):
                generator_(move(generator)), distributor_(move(distributor)){};
        int fill(int index) override;
    private:
        std::default_random_engine generator_;
        std::uniform_int_distribution<int> distributor_;
    };

    class SquaredFill : public Filler{

    };

    void FillArray(int size, Filler &filler, std::vector<int> *v);
}

#endif //JIMP_EXERCISES_ARRAYFILL_H
