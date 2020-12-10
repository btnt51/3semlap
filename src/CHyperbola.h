//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CHYPERBOLA_H
#define INC_3SEMLAP_CHYPERBOLA_H
#include "AFunction.h"
#include "InputData.h"

class CHyperbola : public AFunction
{
public:
    CHyperbola();
    void Display() override;
    double Calculating(double x) override;
    void Input(double &x) override;
};


#endif //INC_3SEMLAP_CHYPERBOLA_H
