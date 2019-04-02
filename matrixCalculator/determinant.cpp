//
//  determinant.cpp
//  matrixCalculator
//
//  Created by Richard Joseph on 4/1/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "determinant.hpp"

int determinant(int **array, int size)
{
    int determinant = 0;

    if (size == 2)
    {
        determinant = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);
    }
    
    else if (size == 3)
    {
        determinant = (array[0][0] * (array[1][1]*array[2][2]) - (array[1][2]*array[2][1])) - (array[0][1] * (array[1][0]*array[2][2]) - (array[1][2]*array[2][0])) + (array[0][2] * (array[1][0] * array[2][1]) - (array[1][1]*array[2][0]));
    }
    
    return determinant;
}
