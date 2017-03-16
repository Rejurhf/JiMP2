//
// Created by Rejurhf on 16.03.2017.
//

#include <iostream>
#include "GreatestProduct.h"

int GreatestProduct(const std::vector<int> &numbers, int k){
    int negNum, tmp, size, size1, pos, neg, result = 1, quantity = k;
    if(k % 2 != 0)
        negNum = k - 1;
    else
        negNum = k;
    std::vector<int> positivMax, negativMax;
    for(int v : numbers) {
        if(v > 0){
            if(positivMax.size() < k)
                positivMax.push_back(v);
            else{
                tmp = 0;
                for (int i = 0; i < k; ++i) {
                    if(positivMax[tmp] > positivMax[i])
                        tmp = i;
                }
                if(v > positivMax[tmp])
                    positivMax[tmp] = v;
            }
        }else{
            if(negativMax.size() < negNum)
                negativMax.push_back(v);
            else{
                tmp = 0;
                for (int i = 0; i < negNum; ++i) {
                    if(negativMax[tmp] < negativMax[i])
                        tmp = i;
                }
                if(v < negativMax[tmp])
                    negativMax[tmp] = v;
            }
        }
    }
    size = positivMax.size();
    if(size > 1){
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size-i-1; ++j) {
                if(positivMax[j] > positivMax[j+1]){
                    tmp = positivMax[j];
                    positivMax[j] = positivMax[j+1];
                    positivMax[j+1] = tmp;
                }
            }
        }
    }
    size1 = negativMax.size();
    if(size1 > 1){
        for (int i = 0; i < size1; ++i) {
            for (int j = 0; j < size1-i-1; ++j) {
                if(negativMax[j] < negativMax[j+1]){
                    tmp = negativMax[j];
                    negativMax[j] = negativMax[j+1];
                    negativMax[j+1] = tmp;
                }
            }
        }
    }
    while(quantity > 0){
        if(quantity == 1)
            return result * positivMax[size-1];
        if(size1 >= 2 && size >= 2){
            pos = positivMax[size-1]*positivMax[size-2];
            neg = negativMax[size1-1]*negativMax[size1-2];
            if(pos > neg){
                result *= pos;
                positivMax.pop_back();
                positivMax.pop_back();
                size -= 2;
            }else{
                result *= neg;
                negativMax.pop_back();
                negativMax.pop_back();
                size1 -= 2;
            }
            quantity -= 2;
        }else if(size1 < 2){
            result *= positivMax[size-1];
            positivMax.pop_back();
            --size;
            --quantity;
        }else{
            result *= negativMax[size-1];
            negativMax.pop_back();
            --size1;
            --quantity;
        }
    }
    return result;
}