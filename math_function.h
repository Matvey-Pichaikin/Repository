#include <iostream>

double math_function(double first_number, double second_number, char math_operation)
{
    if(math_operation == '+')
        return first_number + second_number;
    if(math_operation == '-')
        return first_number - second_number;
    if(math_operation == '*')
        return first_number * second_number;
    if(math_operation == '/')
        return first_number / second_number;
    else
    {
        std::cout << "Invalid operation entered!\n";
        return 0;
    }    
};