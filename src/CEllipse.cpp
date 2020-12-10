//
// Created by btnt51 on 30.11.2020.
//

#include <iostream>
#include "CEllipse.h"

CEllipse::CEllipse()
{

}


double CEllipse::Calculating(double x)
{
    double bsqr = pow(B, 2);//1
    double asqr = pow(A, 2);//4
    double xsqr = pow(x, 2);//0
    y = sqrt((bsqr / asqr)/*1/4*/ * (asqr - xsqr)/*4*/);
    if(y != -y)
    {
        throw -1;
    }
    else return y;
}

void CEllipse::Display()
{
    std::cout << "A = " << A << "; B = " << B << "; y = " << y <<";" << std::endl;
}

void CEllipse::Input(double &x)
{
    std::cout << "Reminder: For an ellipse, a must be greater than b"<< std::endl;
    std::cout << " Enter A: ";
    double a = 0;
    a = GetInput::InputData(a, "Insert the number");
    a = GetInput::ZeroCheck(a);
    std::cout << "Enter B: ";
    double b = 0;
    b = GetInput::InputData(b, "Insert the number");
    b = GetInput::ZeroCheck(b);
    while (a<=b)
    {
        std::cout << "B couldn`t be bigger then A" << std::endl;
        std::cout << " Enter A: ";
        a = GetInput::InputData(a, "Insert the number");
        std::cout << "Enter B: ";
        b = GetInput::InputData(b, "Insert the number");
    }
    std::cout << "Enter x: ";
    x = GetInput::InputData(x, "Insert the number");
}
