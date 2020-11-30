//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_AFUNCTION_H
#define INC_3SEMLAP_AFUNCTION_H
#include <cmath>
#include <iostream>

class AFunction
{
public:
    virtual void Display() = 0;
    virtual double Calculating(double x) = 0;
};


#endif //INC_3SEMLAP_AFUNCTION_H
