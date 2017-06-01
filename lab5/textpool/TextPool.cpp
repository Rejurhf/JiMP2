//
// Created by Rejurhf on 01.04.2017.
//

#include "TextPool.h"

namespace pool{
    TextPool::TextPool(std::initializer_list<std::string> text){
        for(auto &&v : text){
            words_.insert(v);
        }
    }

    TextPool::TextPool(TextPool &&view){
        std::swap(words_, view.words_);
    }

    TextPool& TextPool::operator = (TextPool &&view){
        if(this == &view)
            return *this;
        std::swap(view.words_, words_);
        return *this;
    }

    std::experimental::string_view TextPool::Intern(const std::string &str){
        auto tmp = words_.insert(str);
        std::experimental::string_view out = *tmp.first;
        return out;
    }

    size_t TextPool::StoredStringCount() const{
        size_t size = words_.size();
        return size;
    }
}