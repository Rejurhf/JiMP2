//
// Created by Rejurhf on 25.05.2017.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <string>
#include <queue>

namespace tree{
    class Leaf{
    public:
        Leaf(double value): value_(value), left_(nullptr), right_(nullptr){};
        void SetLeftChild(Leaf &child){ left_ = &child; }
        void SetRightChild(Leaf &child){ right_ = &child; }
        double GetValue(){ return value_; }
        void SetValue(double value){ value_ = value; }
        Leaf GetLeftChild(){ return *left_; }
        Leaf GetRightChild(){ return *right_; }
    private:
        double value_;
        Leaf *left_, *right_;
    };

    class Tree{
    public:
        Tree(): root_(nullptr) {};
        Leaf GetRoot(){ return *root_; }
        void AddLeaf(double value);
        std::string PrintTree(Leaf tree);
    private:
        Leaf *root_;
    };

    void Tree::AddLeaf(double value) {
        Leaf child = Leaf(value);
        Leaf *tmp;
        std::queue<Leaf> childList;
        if(root_ == nullptr)
            *root_ = child;
        else {
            int position = 0;
            tmp = root_;
            while (position == 0) {
                if (tmp->GetLeftChild() != nullptr and tmp->GetRightChild() != nullptr) {
                    childList.push(tmp->GetLeftChild());
                    childList.push(tmp->GetRightChild());
                    tmp = &childList.front();
                    childList.pop();
                } else if (tmp->GetLeftChild() != nullptr)
                    position = 1;
                else
                    position = 2;
            }
            if(position == 1)
                tmp->SetLeftChild(child);
            else
                tmp->SetRightChild(child);
        }
    }

    std::string Tree::PrintTree(Leaf root){
        Leaf tmp = root;
        if(tmp.GetValue() == nullptr)
            return "[none}";
        return "[" + std::to_string(tmp.GetValue()) + " [" + PrintTree(tmp.GetLeftChild()) +
                "] [" + PrintTree(tmp.GetRightChild()) + "]]";
    }
}
#endif //JIMP_EXERCISES_TREE_H
