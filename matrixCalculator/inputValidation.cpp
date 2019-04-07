#include "inputValidation.hpp"

/*Input Validation function to make sure user enters an integer value of either
 Source:learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
 */

int inputValidation()
{
    while (true)
    {
        std::cout << "Enter 2 for a 2x2 matrix or 3 for a 3x3 matrix:" << std::endl;
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput == 2 || userInput == 3)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}
