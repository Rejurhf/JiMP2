//
// Created by Rejurhf on 16.03.2017.
//

#include "GreatestProduct.h"

int GreatestProduct(const std::vector<int> &numbers, int k){
    int num1 = 0, num2 = 0;
    for(int v : numbers){
        if(v > num1 || v > num2){
            if(num1 > num2)
                num2 = v;
            else
                num1 = v;
        }
    }
    return num1 * num2;
}