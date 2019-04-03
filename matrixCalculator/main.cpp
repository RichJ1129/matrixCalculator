/*********************************************************************
 ** Program name:
 ** Author: Richard Joseph
 ** Date: 4/2/19
 ** Description: 
 *********************************************************************/


#include "readMatrix.hpp"
#include "determinant.hpp"

int main()
{
    int rows;
    int columns;
    
    std::cout << "Enter 2 for a 2x2 matrix or 3 for a 3x3 matrix:" << std::endl;
    std::cin >> rows;
    
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
    
    std::cout << "The Determinant of the matrix is " << determinant(matrix, rows);
    
    std::cout << std::endl;
    
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }
    
    delete [] matrix;
    
    return 0;
}
