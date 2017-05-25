//
// Created by Rejurhf on 25.05.2017.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <string>

namespace tree{
    class Leaf{
    public:
        Leaf(double value): value_(value), left_(nullptr), right_(nullptr){};
        void SetLeftChild(Leaf &child){ left_ = &child; }
        void SetRightChild(Leaf &child){ right_ = &child; }
        double GetValue(){ return value_; }
        Leaf GetLeftChild(){ return *left_; }
        Leaf GetRightChild(){ return *right_; }
    private:
        double value_;
        Leaf *left_, *right_;
    };

    class Tree{
        void AddLeaf(double value, Leaf parent, int place);
        std::string PrintTree(Leaf tree);
    };
}
#endif //JIMP_EXERCISES_TREE_H
