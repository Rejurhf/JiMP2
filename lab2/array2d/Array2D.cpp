//
// Created by Student on 09/03/17.
//

#include "Array2D.h"

int **Array2D(int n_rows, int n_columns){
    if(n_columns <= 0 || n_rows <= 0) return nullptr;
    int **array = new int *[n_rows];
    int nr = 1;
    for (int i = 0; i < n_rows; ++i) {
        array[i] = new int [n_columns];
    }
    for(int i = 0; i < n_rows; ++i){
        for (int j = 0; j < n_columns; ++j) {
            array[i][j] = nr++;
        }
    }
    return array;
}

void DeleteArray2D(int **array, int n_rows, int n_columns){
    for (int i = 0; i < n_rows; ++i) {
        delete [] array[i];
    }
    delete array;
}