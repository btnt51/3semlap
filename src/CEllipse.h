//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CELLIPSE_H
#define INC_3SEMLAP_CELLIPSE_H


#include "AFunction.h"

class CEllipse : public AFunction
{
public:
    CEllipse(double a, double b);
    void Display() override;
    double Calculating(double x) override;

private:
    double A;
    double B;
    double y;
};


#endif //INC_3SEMLAP_CELLIPSE_H
