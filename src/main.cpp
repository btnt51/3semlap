#include <iostream>
#include "CEllipse.h"
#include "CHyperbola.h"

int main()
{
    try {
        CEllipse ellipse(4,sqrt(7));
        ellipse.Calculating(1);
        ellipse.Display();
    }
    catch(int a)
    {
        if(a == -1)
        {
            std::cout << "B couldn`t be bigger then A" << std::endl;
        }
    }
    CHyperbola hyperbola(2,sqrt(5));
    hyperbola.Calculating(3);
    hyperbola.Display();
    return 0;
}
