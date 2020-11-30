//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CMENU_H
#define INC_3SEMLAP_CMENU_H
#include <fstream>
#include "CEllipse.h"
#include "CHyperbola.h"

class CMenu {
public:
    CMenu();

    ~CMenu();

    static void menu();

    static void Ellipse();

    static void Hyperbola();

    static double InputData(double number, char const *str);

    static double ZeroCheck(double number);
};


#endif //INC_3SEMLAP_CMENU_H
