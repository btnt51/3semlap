//
// Created by btnt51 on 30.11.2020.
//

#include "CHyperbola.h"

CHyperbola::CHyperbola(double a, double b)
{
    A = a;
    B = b;
    y = 0.0;
}

double CHyperbola::Calculating(double x)
{
    y=sqrt((pow(B,2)/pow(A,2))*(pow(x,2)-pow(A,2)));
    return y;
}

void CHyperbola::Display()
{
    std::cout << "A = " << A << "; B = " << B << "; y = " << y <<";"<< std::endl;
}
