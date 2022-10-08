#ifndef Log_h
#define Log_h

#endif /* Log_h */

void Log(float ina, float inb, float result, char calcType, bool divideZero, bool sqrtNegative)
{
    
    std::cout << std::endl;
    std::cout << "Results" << std::endl << "=============================" << std::endl;
    if(calcType == '+')
    {
        std::cout << "Add " << ina << " and " << inb << " = " << result << std::endl;
        
    }else if (calcType == '-')
    {
        std::cout << "Subtract " << ina << " and " << inb << " = " << result << std::endl;
        
    }else if(calcType == '*')
    {
        std::cout << "Multiply " << ina << " and " << inb << " = " << result << std::endl;
    
    }else if(calcType == '/')
    {
       
            std::cout << "Divide " << ina << " by " << inb << " = " << result << std::endl;
        
    }else if(calcType == 's')
    {
     
            std::cout << "Sqrt of " << ina << " = " << result << std::endl;
        
    }else if(calcType == 'p')
    {
        std::cout << "Power2 of " << ina << " = " << result << std::endl;
        
    }else if(calcType == 'r')
    {
        std::cout << "Round " << ina << " to the next integer = " << result << std::endl;
        
    }
    
}
