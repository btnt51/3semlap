
//
// Created by btnt51 on 30.11.2020.
//

#include <cstring>
#include "CMenu.h"

CMenu::CMenu()
{

}

CMenu::~CMenu()
{

}

void CMenu::menu()
{
    std::string Command;
    while (true)
    {
        std::cout << "\nTo work with an ellipse, enter the \"Ellipse \" command.\nTo work with a hyperbola, enter the \"Hyperbola \" command.\nTo exit enter \"Exit \"" << std::endl;
        std::cin >> Command;
        for (char &c : Command) c = toupper(c);                 //подведение команды в верхний регистр для сравнения
        if (strcmp(Command.c_str(), "EXIT") == 0)               //проверка на выход
        {
            break;                                              //выход из программы
        }
        else if (strcmp(Command.c_str(), "ELLIPSE") == 0)
        {
            Ellipse();
        }
        else if (strcmp(Command.c_str(), "HYPERBOLA") == 0)
        {
            Hyperbola();
        }
        else
        {
            std::cout << "Command entered incorrectly" << std::endl;
        }
    }
}

void CMenu::Hyperbola()
{
    auto Hyperbola = new CHyperbola();
    WorkWithBaseClass(Hyperbola);
    delete Hyperbola;
}

void CMenu::Ellipse()
{
    CEllipse ellipse;
    WorkWithBaseClass(&ellipse);
}

void CMenu::WorkWithBaseClass(AFunction *Afunc)
{
    try {
        double x{};
        Afunc->Input(x);
        Afunc->Calculating(x);
        Afunc->Display();
    }
    catch (int a)
    {
        if(a == -1)
            std::cout << "WE couldn`t calculate it" << std::endl;
    }
}

