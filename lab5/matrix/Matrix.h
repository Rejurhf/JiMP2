//
// Created by Rejurhf on 02.04.2017.
//

#ifndef JIMP_EXERCISES_MATRIX_H
#define JIMP_EXERCISES_MATRIX_H

#include <complex>
#include <vector>

namespace algebra{
    class Matrix{
    public:
        Matrix();
        Matrix(int row, int col);           //initialize matrix and fill with 0
        Matrix(std::string matrixStr);
        Matrix(const Matrix &matrix);
        ~Matrix();                          //delete matrix
        void ChangeValue(int row, int col, std::complex<double> value);
        void Print();                       //print matrix
        void Allocate();
    private:
        int row_;
        int col_;
        std::complex<double> **matrix_;
    };
}

#endif //JIMP_EXERCISES_MATRIX_H
