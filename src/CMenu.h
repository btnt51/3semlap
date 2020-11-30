//
// Created by btnt51 on 30.11.2020.
//

#ifndef INC_3SEMLAP_CMENU_H
#define INC_3SEMLAP_CMENU_H
#include "inputData.h"
#include "CEllipse.h"
#include "CHyperbola.h"

class CMenu
{
    CMenu();
    ~CMenu();
    void menu();

private:
    CEllipse ellipse;
    CHyperbola hyperbola;
};


#endif //INC_3SEMLAP_CMENU_H
