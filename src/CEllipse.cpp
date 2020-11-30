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
    y = sqrt((pow(B,2)/pow(A,2))*(pow(A,2) - pow(x,2)));
    return y;
}

void CEllipse::Display()
{
    std::cout << "A = " << A << " B= " << B << " y= " << y << std::endl;
}