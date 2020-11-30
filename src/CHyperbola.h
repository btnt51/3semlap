//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CHYPERBOLA_H
#define INC_3SEMLAP_CHYPERBOLA_H
#include "AFunction.h"

class CHyperbola : public AFunction
{
public:
    CHyperbola(double a, double b);
    void Display() override;
    double Calculating(double x) override;

private:
    double A;
    double B;
    double y;
};


#endif //INC_3SEMLAP_CHYPERBOLA_H
