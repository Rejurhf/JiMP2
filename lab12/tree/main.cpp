//
// Created by Rejurhf on 25.05.2017.
//

#include "Tree.h"

using namespace tree;

int main(){
    Tree myTree = Tree();
    myTree.AddLeaf(0.1);
    myTree.AddLeaf(1.2);
    myTree.AddLeaf(2.3);
    myTree.AddLeaf(3.4);
    myTree.AddLeaf(4.5);
    myTree.AddLeaf(5.6);
    myTree.AddLeaf(6.7);
    myTree.AddLeaf(7.8);
    myTree.AddLeaf(8.9);
    myTree.AddLeaf(9.0);
    myTree.PrintTree(myTree.GetRoot());
    return 0;
}