//
// Created by Rejurhf on 06.06.2017.
//

#ifndef JIMP_EXERCISES_TREEITERATORS_H
#define JIMP_EXERCISES_TREEITERATORS_H
#include <Tree.h>

namespace tree {

    template<class T>
    class GenericIterator {
    public:
        GenericIterator(Tree<T> *root) : root_(root) {}
        const void Add(const T &val) {values_.push_back(val);}
        const void setIteration(const size_t &in) {i_ = in;}
        size_t size() const {return values_.size();}
        virtual void MakeVectorBasedOnOrder(Tree<T> *node) = 0;
        T operator++() { if (i_ >= 0) ++i_; }
        T operator*() { return values_[i_]; }
        bool operator!=(const GenericIterator &iterator) const {
            return (values_ != iterator.values_ || i_ != iterator.i_);
        }

    private:
        Tree<T> *root_;
        std::vector<T> values_;
        size_t i_;
    };

    template<class T>
    class PreOrderTreeIterator : public GenericIterator<T> {
    public:
        PreOrderTreeIterator(Tree<T> *root) : GenericIterator<T>(root) {
            MakeVectorBasedOnOrder(root);
            this->setIteration(0);
        }

        void MakeVectorBasedOnOrder(Tree<T> *node) override {
            this->Add(node->value_);
            if (node->left_ != nullptr) MakeVectorBasedOnOrder(node->left_.get());
            if (node->right_ != nullptr) MakeVectorBasedOnOrder(node->right_.get());
        }
    };

    template<class T>
    class PreOrderTreeView {
    public:
        PreOrderTreeView(Tree<T> *tree) : iter_(tree->Root()) {}

        PreOrderTreeIterator<T> begin() {
            iter_.setIteration(0);
            return iter_;
        }

        PreOrderTreeIterator<T> end() {
            iter_.setIteration(iter_.size() - 1);
            return iter_;
        }

    private:
        PreOrderTreeIterator<T> iter_;
    };

    template<class T>
    class InOrderTreeIterator : public GenericIterator<T> {
    public:
        InOrderTreeIterator(Tree<T> *root) : GenericIterator<T>(root) {
            MakeVectorBasedOnOrder(root);
            this->setIteration(0);
        }

        void MakeVectorBasedOnOrder(Tree<T> *node) override {
            if (node->left_ != nullptr) MakeVectorBasedOnOrder(node->left_.get());
            this->Add(node->value_);
            if (node->right_ != nullptr) MakeVectorBasedOnOrder(node->right_.get());
        }
    };

    template<class T>
    class InOrderTreeView {
    public:
        InOrderTreeView(Tree<T> *tree) : iter_(tree->Root()) {}

        InOrderTreeIterator<T> begin() {
            iter_.setIteration(0);
            return iter_;
        }

        InOrderTreeIterator<T> end() {
            iter_.setIteration(iter_.size() - 1);
            return iter_;
        }

    private:
        InOrderTreeIterator<T> iter_;
    };

    template<class T>
    class PostOrderTreeIterator : public GenericIterator<T> {
    public:
        PostOrderTreeIterator(Tree<T> *root) : GenericIterator<T>(root) {
            MakeVectorBasedOnOrder(root);
            this->setIteration(0);
        }

        void MakeVectorBasedOnOrder(Tree<T> *node) override {
            if (node->left_ != nullptr) MakeVectorBasedOnOrder(node->left_.get());
            if (node->right_ != nullptr) MakeVectorBasedOnOrder(node->right_.get());
            this->Add(node->value_);
        }
    };

    template<class T>
    class PostOrderTreeView {
    public:
        PostOrderTreeView(Tree<T> *tree) : iter_(tree->Root()) {}

        PostOrderTreeIterator<T> begin() {
            iter_.setIteration(0);
            return iter_;
        }

        PostOrderTreeIterator<T> end() {
            iter_.setIteration(iter_.size() - 1);
            return iter_;
        }

    private:
        PostOrderTreeIterator<T> iter_;
    };

    template<typename T>
    InOrderTreeView<T> InOrder(Tree<T> *tree) {
        return InOrderTreeView<T>(tree);
    };

    template<typename T>
    PreOrderTreeView<T> PreOrder(Tree<T> *tree) {
        return PreOrderTreeView<T>(tree);
    };

    template<typename T>
    PostOrderTreeView<T> PostOrder(Tree<T> *tree) {
        return PostOrderTreeView<T>(tree);
    };
}

#endif //JIMP_EXERCISES_TREEITERATORS_H
