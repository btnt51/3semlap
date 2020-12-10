//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_AFUNCTION_H
#define INC_3SEMLAP_AFUNCTION_H
#include <cmath>


class AFunction
{
public:
    virtual void Display() = 0;
    virtual double Calculating(double x) = 0;
    virtual void Input(double &x) = 0;

protected:
    double A{};
    double B{};
    double y{};
};


#endif //INC_3SEMLAP_AFUNCTION_H
