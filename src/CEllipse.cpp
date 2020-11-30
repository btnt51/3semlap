//
// Created by btnt51 on 30.11.2020.
//

#include <iostream>
#include "CEllipse.h"

CEllipse::CEllipse(double a, double b)
{
        if(a > b)
        {
            A = a;
            B = b;
            y = 0.0;
        }
        else
            throw -1;
}


double CEllipse::Calculating(double x)
{
    double bsqr = pow(B,2);
    double asqr = pow(A,2);
    double xsqr = pow(x,2);
    y=sqrt((bsqr/asqr)*(asqr-xsqr));
    return y;
}

void CEllipse::Display()
{
    std::cout << "A = " << A << "; B = " << B << "; y = " << y <<";" << std::endl;
}