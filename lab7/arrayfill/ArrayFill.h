//
// Created by Student on 20/04/17.
//

#ifndef JIMP_EXERCISES_ARRAYFILL_H
#define JIMP_EXERCISES_ARRAYFILL_H

#include <vector>
#include <random>
#include <memory>

using std::default_random_engine;
using std::uniform_int_distribution;
using std::unique_ptr;

namespace arrays {
    class Filler{
    public:
        virtual int fill(int index) const = 0;
    };

    class IncrementalFill : public Filler {
    public:
        IncrementalFill(int start_value = 0, int multiply_value = 1):
                value_start_(start_value), value_multiply_(multiply_value){};
        virtual int fill(int index) const override;
    private:
        int value_start_;
        int value_multiply_;
    };

    class RandomFill : public Filler{
    public:
        RandomFill(unique_ptr<default_random_engine> generator, unique_ptr<uniform_int_distribution<int>> distributor):
                generator_(move(generator)), distributor_(move(distributor)){};
        virtual int fill(int index) const override;
    private:
        unique_ptr<default_random_engine> generator_;
        unique_ptr<uniform_int_distribution<int>> distributor_;
    };

    class SquaredFill : public Filler{
    public:
        SquaredFill(int multiply_value = 1, int start_value = 0):
                value_multiply_(multiply_value), value_start_(start_value){};
        virtual int fill(int index) const override;
    private:
        int value_multiply_;
        int value_start_;
    };

    class UniformFill : public Filler{
    public:
        UniformFill(int value = 0): value_(value){};
        virtual int fill(int index) const override;
    private:
        int value_;
    };

    void FillArray(int size, const Filler &filler, std::vector<int> *v);
}

#endif //JIMP_EXERCISES_ARRAYFILL_H
