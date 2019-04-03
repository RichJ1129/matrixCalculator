/*********************************************************************
 ** Program name:
 ** Author: Richard Joseph
 ** Date: 4/2/19
 ** Description:
 *********************************************************************/

#include "determinant.hpp"

int determinant(int **array, int size)
{
    int determinant = 0;
    int equationOne = 0;
    int equationTwo = 0;
    int equationThree = 0;

    if (size == 2)
    {
        determinant = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);
    }
    
    else if (size == 3)
    {
        equationOne = array[0][0] * ((array[1][1] * array[2][2]) - (array[1][2]*array[2][1]));
        equationTwo = array[0][1] * ((array[1][0] * array[2][2]) - (array[1][2]*array[2][0]));
        equationThree = array[0][2] * ((array[1][0] * array[2][1]) - (array[1][1]*array[2][0]));
        determinant =  equationOne - equationTwo  + equationThree ;
    }
    
    return determinant;
}
