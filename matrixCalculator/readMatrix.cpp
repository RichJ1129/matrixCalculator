#include "readMatrix.hpp"

/* Function that passes parameters of the array and size
and uses them in a for loop to initialize the elements of
the array. */

void readMatrix(int **array, int size)
{
    if(size ==  2)
    {
        std::cout << "Please enter 4 integers to fill the array: " << std::endl;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                std::cin >> array[i][j];
            }
        }
    }
    
    else if(size ==  3)
    {
        std::cout << "Please enter 9 integers to fill the array: " << std::endl;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                std::cin >> array[i][j];
            }
        }
    }
}
