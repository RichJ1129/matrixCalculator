/*********************************************************************
 ** Program name:matrixCalculator
 ** Author: Richard Joseph
 ** Date: 4/2/19
 ** Description: User is asked to input 2 or 3 based on the size of the
                 matrix that the user wants to form. The matrix is then
                 created and the user is prompted for integers to put in
                 the array from left to right. After each integer press
                 enter. Once user enters the last integer the determinant is
                 calculated.
 *********************************************************************/

#include "readMatrix.hpp"
#include "determinant.hpp"
#include "inputValidation.hpp"

int main()
{
    int rows = 0;
    int columns = 0;
    
    rows = inputValidation();
    
    int **matrix = new int *[rows];
    
    for(int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[rows];
    }
    
    columns = rows;
    
    readMatrix(matrix, rows);
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << determinant(matrix, rows);
    
    std::cout << std::endl;
    
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }
    
    delete [] matrix;
    
    return 0;
}
