//
// Created by Rejurhf on 25.05.2017.
//

#include "Tree.h"

namespace tree{
    void Tree::AddLeaf(double value, Leaf parent, int place) {
        Leaf child = Leaf(value);
        if(place == 0)
            parent.SetLeftChild(child);
        else
            parent.SetRightChild(child);
    }

    std::string Tree::PrintTree(Leaf tree) {
        if(tree.GetValue() == nullptr)
            return "[none}";
        return "[" + std::to_string(tree.GetValue()) + " [" + PrintTree(tree.GetLeftChild()) + "] [" +
               PrintTree(tree.GetRightChild()) + "]]";
    }
}