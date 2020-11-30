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

    void menu();

    void Ellipse();

    void Hyperbola();

    double InputData(double number, char const *str);

    double ZeroCheck(double number);
};


#endif //INC_3SEMLAP_CMENU_H
