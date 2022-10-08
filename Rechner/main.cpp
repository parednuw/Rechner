#include <iostream>
#include "Calc.h"
#include "Log.h"
#include "GetInput.h"


/*void Exit()
{
    
}*/

int main(int argc, const char * argv[])
{
    int exit = 0;
    
    do
    {
        //Start-Screen
        //code
        
        userInputs input = GetInput();
        
        //Calculations
        float result = Calculations(input.ina, input.inb, input.calcType);
        
        //Logging
        Log(input.ina, input.inb, result, input.calcType, input.divideZero, input.sqrtNegative);
        
        //Exit-Menu --> somehow move to a new Exit-function? (see at the top)
        std::cout << std::endl;
        std::cout << "New Calculation? Type in '1' to continue or '0' to exit program." << std::endl;
        std::cout << "=============================" << std::endl << "Exit? ";
        std::cin >> exit;
        
        if(exit != 0 && exit != 1)
        {
            std::cout << "No valid input. Type in '1' to continue or '0' to exit program." << std::endl;
            std::cout << "Exit? ";
            std::cin >> exit;
        }
        
    }while(exit == 1);
    
    std::cout << "Thank you for using the calculator." << std::endl;
    
}
