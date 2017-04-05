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
        Matrix(int row, int col);                                           //initialize matrix and fill with 0
        Matrix(std::string matrixStr);                                      //string to matrix
        Matrix(const Matrix &matrix);                                       //copy
        ~Matrix();                                                          //delete matrix
        void changeValue(int row, int col, std::complex<double> value);     //change one value
        void print();                                                       //print matrix
        std::complex<double> **allocate(int row, int col);                  //allocate memory for matrix
        std::complex<double> getElem(int row, int col) const;               //get value
        int getRow() const;
        int getCol() const;
        Matrix add(const Matrix &other) const;
        Matrix subtract(const Matrix &other) const;
        Matrix multiply(const Matrix &other) const;
        std::complex<double> cellMulti(int row, int col, const Matrix &other) const;
        int Size() const;
    private:
        int row_;
        int col_;
        std::complex<double> **matrix_;
    };
}

#endif //JIMP_EXERCISES_MATRIX_H
