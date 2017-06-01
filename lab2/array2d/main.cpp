#include <iostream>
#include "Array2D.h"

int main() {
    int **array = Array2D(3, 2);
    DeleteArray2D(array, 3, 2);
    return 0;
}