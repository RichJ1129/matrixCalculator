//
//  main.cpp
//  matrixCalculator
//
//  Created by Richard Joseph on 4/1/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//


#include "readMatrix.hpp"
#include "inputValidation.hpp"
#include "determinant.hpp"
#include <iostream>

int main()
{
    int rows;
    int columns;
    std::cout << "Enter 2 for a 2x2 matrix or 3 for a 3x3 matrix:" << std::endl;
    std::cin >> rows;
    
    int **matrix = new int *[rows];
    
    for(int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[columns];
    }
    
    readMatrix(matrix, rows);
    
    
    
    

    return 0;
}
