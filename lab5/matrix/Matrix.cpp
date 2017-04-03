//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include <cstring>
#include "Matrix.h"

using ::std::cout;
using ::std::endl;

namespace algebra{
    Matrix::Matrix() {
        cout<<"Empty matrix"<<endl;
    }

    Matrix::Matrix(int row, int col) {                                  //matrix constructor
        cout<<"m(r,c)"<<endl;
        if((row or col) < 1){
            cout<<"Anti idiot protection"<<endl;
            return;
        }
        row_ = row;
        col_ = col;
        matrix_ = this->Allocate(row_, col_);
    }

    Matrix::Matrix(std::string matrixStr) {                                     //string to matrix
        std::string str = matrixStr;
        if(str[0] != '['){
            cout<<"Wrong syntax";
            return;
        }
        bool real = true;
        std::string tmpR = "", tmpI = "";
        int i = 1, numRow = 1, numCol = 0;
        while(i < str.size()){                                                  //check matrix dimensions
            while(str[i] != ' ' and str[i] != ';' and str[i] != ']'){
                ++i;
            }
            if(numRow == 1)
                ++numCol;
            if(str[i] == ';')
                ++numRow;
            ++i;
        }

        row_ = numRow;
        col_ = numCol;
        cout<<"toall"<<endl;
        matrix_ = this->Allocate(row_, col_);                                   //create matrix
        cout<<"fromall"<<endl;
        numCol = 0;
        numRow = 0;
        i = 1;
        while(i < str.size()){                                                  //fill matrix with values
            while(str[i] != ' ' and str[i] != ';' and str[i] != ']'){           //find values
                if(str[i] == 'i')                                               //real or imaginary
                    real = false;
                else if(real)
                    tmpR += str[i];
                else
                    tmpI += str[i];
                ++i;
            }
            matrix_[numRow][numCol].real(std::stod(tmpR, 0));                   //set real value
            if(!real)
                matrix_[numRow][numCol].imag(std::stod(tmpI, 0));               //set imaginary value
            if(str[i] == ';'){                                                  //next row
                ++numRow;
                numCol = 0;
            } else                                                              //next column
                ++numCol;
            ++i;
            if(str[i] == ' ')                                                   //protection in case of wrong syntax
                ++i;
            real = true;
            tmpI = "";
            tmpR = "";
        }
    }

    Matrix::Matrix(const Matrix &matrix) {                                      //copy
        row_ = matrix.row_;
        col_ = matrix.col_;
        matrix_ = new std::complex<double> *[row_];
        for (int i = 0; i < row_; ++i) {
            matrix_[i] = matrix.matrix_[i];
        }
    }

    Matrix::~Matrix() {                                                         //destructor
        cout<<"delete"<<endl;
        for (int i = 0; i < row_; ++i) {
            delete[] &matrix_[i];
        }
        delete matrix_;
    }

    void Matrix::ChangeValue(int row, int col, std::complex<double> value) {    //change 1 value
        if(row <= row_ and col <= col_)
            matrix_[row][col] = value;
        else
            cout<<"Out of range"<<endl;
    }

    void Matrix::Print() {                                                      //print matrix
        cout<<"print"<<endl;
        for (int i = 0; i < row_; ++i) {
            for (int j = 0; j < col_; ++j) {
                if (j > 0)
                    cout<<" ";
                cout<<matrix_[i][j];
            }
            cout<<endl;
        }
    }

    std::complex<double> **Matrix::Allocate(int row, int col){                  //allocate memory for  matrix
        cout<<"all"<<endl;
        std::complex<double> **matrix = new std::complex<double> *[row];
        for (int i = 0; i < row; ++i) {                     //create 2d array
            matrix[i] = new std::complex<double> [col];
        }
        return matrix;
    }
}