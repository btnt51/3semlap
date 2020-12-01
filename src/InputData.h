//
// Created by btnt51 on 01.12.2020.
//

#ifndef INC_3SEMLAP_INPUTDATA_H
#define INC_3SEMLAP_INPUTDATA_H
#include <iostream>
#include <fstream>

class GetInput
{
public:
    static double InputData(double number, const char * str)
    {
        bool validInput;
        std::cin.exceptions(std::ifstream::failbit);
        do
        {
            try
            {
                validInput = true;
                std::cin >> number;
            }
            catch (std::ios_base::failure &fail)
            {
                validInput = false;
                std::cin.clear();
                std::string dummy;
                std::cin >> dummy;
                std::cout << str << std::endl;
            }
        } while(!validInput);
        return number;
    }

    static double ZeroCheck(double number)
    {
        while (number == 0)
        {
            std::cout<<"Division by zero is not possible" << std::endl;
            number = InputData(number, "Insert the number");
        }
        return number;
    }
};
#endif //INC_3SEMLAP_INPUTDATA_H
