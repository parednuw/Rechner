//
//  main.cpp
//  Rechner
//
//  Created by Paul Wunder on 21.11.20.
//  Copyright © 2020 Paul Wunder. All rights reserved.
//

#include <iostream>
#include "Calc.h"
#include "Log.h"
#include "GetInput.h"


void Exit()
{
    
}

int main(int argc, const char * argv[])
{
    int exit = 0;
    
    do
    {
        //Start-Screen
        //code
        
        userInputs input = GetInput();  //call GetInput-Function and write all outputs to userInputs-struct "input"
        
        //Calculations
        float result = Calculations(input.ina, input.inb, input.calcType);
        
        //Logging
        Log(input.ina, input.inb, result, input.calcType, input.divideZero, input.sqrtNegative);
        
        //Exit-Menu --> somehow move to a new Exit-function?
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
    
    //std::cout << "Thank you for using the calculator." << std::endl;
    
}
