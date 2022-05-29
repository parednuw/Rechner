//
//  Calc.h
//  Rechner
//
//  Created by Paul Wunder on 22.11.20.
//  Copyright © 2020 Paul Wunder. All rights reserved.
//
#include <tgmath.h>

#ifndef Calc_h
#define Calc_h


#endif /* Calc_h */

// h-file for all calculations
float Calculations(float a, float b, char calcType)
{
    float result = 0;
    
    
   // switch(calcType)
   // {
    //    case '+': result = a + b;
    //   case '-': result = a - b;
    //    case '*': result = a * b;
    //    case '/':
    //    case 's':
    //    case 'p':
    //    case 'r':
   // }
    
    
    
    if(calcType == '+') //Addition
    {
        result = a + b;
        
    }else if(calcType == '-')   //Subtraction
    {
        result = a - b;
        
    }else if(calcType == '*')   //Multiplication
    {
        result = a * b;
        
    }else if(calcType == '/')   //Division
    {
       // if(b == 0)              //if division is the chosen operation, check if the second input is 0. no division by 0 should be possible!
       // {
       //     std::cout << "No Division by 0 possible." << std::endl;
       //     result = 0;
       //}
        
        result = a / b;
        
    }else if(calcType == 's')   //Square-Root
    {
        if (a < 0)              //if sqrt is the chosen operation, check if the input is negative. for further implementation, consider complex-values as return.
        {
            std::cout << "No sqrt of negative number possible in |R." << std::endl;
            result = 0;
        }
        
        result = sqrt(a);
        
    }else if(calcType == 'p')   //Power of 2
    {
        result = pow(a, 2);
        
    }else if(calcType == 'r')   //Round
    {
        result = roundf(a);
        
        if(result == 0)        //roundf always takes the sign to the result. if the result is 0, the absolute value of -0 (0) will be written to the result-variable
        {
            result = abs(result);
        }
        
    }
        
    return result;
};
