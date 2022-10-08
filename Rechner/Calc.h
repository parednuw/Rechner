#include <tgmath.h>

#ifndef Calc_h
#define Calc_h

#endif /* Calc_h */

float Calculations(float a, float b, char calcType)
{
    float result = 0;

    if(calcType == '+')			//Addition
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
        result = a / b;
		
    }else if(calcType == 's')   //Square-Root
    {
        if (a < 0)              //for further implementation, consider complex-values as return.
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
			result = abs(result);
    }
        
    return result;
};
