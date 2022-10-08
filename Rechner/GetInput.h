#ifndef GetInput_h
#define GetInput_h

#endif /* GetInput_h */

struct userInputs
{
    char calcType;
    float ina;
    float inb;
    bool divideZero = false;
    bool sqrtNegative = false;
};

userInputs GetInput()
{
    userInputs input;
    bool inputcheck_calc = false;           //bool to check if calctype-input is valid
    bool inputcheck_a = true;               //bools to check if variable-inputs are valid
    bool inputcheck_b = true;
    
	
    //Input of Calculation-Type
    //----------------------------------------
    //----------------------------------------
    std::cout << "Which calculation do you wish to perform? Addition (Enter +), Subtraction (-), Multiplication (*), Division (/), Squareroot (s), Power2 (p) or Round (r)?" << std::endl;
    std::cout << "=============================" << std::endl;
    
    do
    {
        inputcheck_calc = false;            //set the check-variable every new dowhile-loop to false.
        std::cout << "I wish ";
        std::cin >> input.calcType;
        
        switch(input.calcType)
        {
            case '+':
            case '-':
            case '*':
            case '/':
            case 's':
            case 'p':
            case 'r':
                break;
            default:
                std::cout << "That's not a valid input for the calculation type! Please enter one of the defined options." << std::endl;
                std::cin.clear();
                inputcheck_calc = true;
                
        }
        
        std::cin.ignore(INT_MAX, '\n');         //safety-clear of all previous entered userinput. if the pre-entered value was invalid, a newly entered value will not be disturbed by the nonvalid pre-input. clear input buffer until INT_MAX (very big number) has been discarded, or a new line has been encountered
    }while(inputcheck_calc);

    
    //Input of Variables
    //----------------------------------------
    //----------------------------------------
    if(input.calcType == 's' || input.calcType == 'p' || input.calcType == 'r') //only one variable for sqrt, pow & round needed. if-check
    {
        std::cout << "Enter your variable:" << std::endl << "=============================" << std::endl;
        
        do
        {
            std::cout << "var: ";
            std::cin >> input.ina;
            inputcheck_a = std::cin.fail();     //cin.fail is true if the userinput is not of datatype INT
            if(inputcheck_a)
            {
                std::cout << "That's not a valid input for the variable! Think!" << std::endl;
                std::cin.clear();               //deletes all previous set error-bits of cin.fail()
            }else if(input.ina < 0 && input.calcType == 's')
            {
                std::cout << "That's not a valid input for the variable! Think!" << std::endl;
                std::cin.clear();               //deletes all previous set error-bits of cin.fail()
                inputcheck_a = true;
            }
            std::cin.ignore(INT_MAX, '\n');
        }while(inputcheck_a);
        
    //----------------------------------------
    }else if (input.calcType == '+' || input.calcType == '-' || input.calcType == '*' || input.calcType == '/') //two variables needed for +-*/
    {
        std::cout << "Enter your variables:" << std::endl << "=============================" << std::endl;
        
        do
        {
            std::cout << "var a: ";
            std::cin >> input.ina;
            inputcheck_a = std::cin.fail();
            if(inputcheck_a)
            {
                std::cout << "That's not a valid input for the first variable. Think!" << std::endl;
                std::cin.clear();
            }
            std::cin.ignore(INT_MAX, '\n');
        }while(inputcheck_a);
        
        do
        {
            std::cout << "var b: ";
            std::cin >> input.inb;
            inputcheck_b = std::cin.fail();
            if(inputcheck_b)
            {
                std::cout << "That's not a valid input for the second variable. Think!" << std::endl;
                std::cin.clear();
            }else if( input.inb == 0)
            {
                std::cout << "Division by 0 is not defined!" << std::endl;
                std::cin.clear();
                inputcheck_b = true;
            }
            std::cin.ignore(INT_MAX, '\n');
        }while(inputcheck_b);
        
    }
    //----------------------------------------
    //----------------------------------------
    
    return input;
    
}
