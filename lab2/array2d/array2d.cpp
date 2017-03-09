//
// Created by Student on 09/03/17.
//

#include "array2d.h"

int factorial(int value) {
    if(value > 12 || value < -12) return 0;
    if(value >= 0){
        if(value == 1){
            return 1;
        }else if(value == 0){
            return 1;
        } else{
            return value*factorial(value-1);
        }
    }
    if(value < 0){
        if(value == -1){
            return -1;
        } else{
            return value*factorial(value+1);
        }
    }
}