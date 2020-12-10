//
// Created by btnt51 on 30.11.2020.
//

#include "CHyperbola.h"

CHyperbola::CHyperbola()
{

}

double CHyperbola::Calculating(double x)
{
        double bsqr = pow(B, 2);
        double asqr = pow(A, 2);
        double xsqr = pow(x, 2);
        y = sqrt((bsqr / asqr) * (xsqr - asqr));
        if(y != y)
        {
            throw -1;
        }
        else return y;
}

void CHyperbola::Display()
{
    std::cout << "A = " << A << "; B = " << B << "; y = " << y <<";"<< std::endl;
}

void CHyperbola::Input(double &x)
{
    std::cout << "Enter A: ";
    double a = 0;
    a = GetInput::InputData(a, "Insert the number");
    a = GetInput::ZeroCheck(a);
    A = a;
    std::cout << "Enter B: ";
    double b = 0;
    b = GetInput::InputData(b, "Insert the number");
    b = GetInput::ZeroCheck(b);
    B = b;
    std::cout << "Enter x: ";
    x = GetInput::InputData(x, "Insert the number");
}
