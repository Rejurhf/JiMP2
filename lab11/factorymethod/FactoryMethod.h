//
// Created by Student on 18/05/17.
//

#ifndef JIMP_EXERCISES_FACTORYMETHOD_H
#define JIMP_EXERCISES_FACTORYMETHOD_H

#include <string>

namespace factoryMethod {
    template<class T>
    T Create(){
        return T();
    }

    class MyType {
    public:
        MyType(){};
        std::string SayHello() const { return "hello"; }
    private:
    };
}

#endif //JIMP_EXERCISES_FACTORYMETHOD_H
