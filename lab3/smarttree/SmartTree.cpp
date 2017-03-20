//
// Created by Rejurhf on 20.03.2017.
//

#include "SmartTree.h"

namespace datastructures{
    std::unique_ptr <SmartTree> CreateLeaf(int value){
        std::unique_ptr<SmartTree> branch = std::make_unique<SmartTree>();
        branch->value = value;
        branch->left = nullptr;
        branch->right = nullptr;
        return branch;
    }

    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree,
                                                std::unique_ptr<SmartTree> left_subtree){
        if(!tree)
            return nullptr;
        tree->left = std::move(left_subtree);
        return tree;
    }

    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree,
                                                 std::unique_ptr<SmartTree> right_subtree){
        if(!tree)
            return nullptr;
        tree->right = std::move(right_subtree);
        return tree;
    }

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out){
        if(unique_ptr->left)
            PrintTreeInOrder(unique_ptr->left, out);
        *out<<unique_ptr->value<<", ";
        if(unique_ptr->right)
            PrintTreeInOrder(unique_ptr->right, out);
    }

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree){
        if(!tree)
            return "[none]";
        return "[" + std::to_string(tree->value) + " [" + DumpTree(tree->left) + "] [" + DumpTree(tree->right) + "]]";
    }

    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree){
        std::unique_ptr<SmartTree> smartTree;
        const std::string str = tree;
        std::string tmp = "";
        int way = 0, i = 0, turn = 2;
        do{
            if(str[i] == '['){
                ++i;
                ++way;
                if(way == 1){
                    while(str[i] != 32 && str[i] != ']'){
                        tmp += str[i];
                        ++i;
                    }
                    if(tmp == "none")
                        return nullptr;
                    smartTree = std::move(CreateLeaf(std::stoi(tmp)));
                    tmp = "";
                }
                if(way == 2 && turn == 2){
                    smartTree->left = std::move(RestoreTree(&str[i-1]));
                    --turn;
                }
                if(way == 2 && turn == 1){
                    smartTree->right = std::move(RestoreTree(&str[i-1]));
                }
            }
            if(str[i] == ']')
                --way;
            ++i;
        }while(way != 0);
        return smartTree;
    }
}