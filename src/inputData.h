//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_INPUTDATA_H
#define INC_3SEMLAP_INPUTDATA_H
#include <iostream>
#include <fstream>

double inputData(double number, char const* str)
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
#endif //INC_3SEMLAP_INPUTDATA_H
