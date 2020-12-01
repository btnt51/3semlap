//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CELLIPSE_H
#define INC_3SEMLAP_CELLIPSE_H


#include "AFunction.h"
#include "InputData.h"


class CEllipse : public AFunction
{
public:
    CEllipse();
    void Display() override;
    double Calculating(double x) override;
    void Input(double &x) override;
};


#endif //INC_3SEMLAP_CELLIPSE_H
