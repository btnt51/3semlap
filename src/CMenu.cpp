
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
    std::cout << "Enter A: ";
    double a = 0;
    a = InputData(a, "Insert the number");
    a = ZeroCheck(a);
    std::cout << "Enter B: ";
    double b = 0;
    b = InputData(b, "Insert the number");
    b = ZeroCheck(b);
    CHyperbola hyperbola(a, b);
    std::cout << "Enter x: ";
    double x = 0;
    x = InputData(x, "Insert the number");
    hyperbola.Calculating(x);
    hyperbola.Display();
}

void CMenu::Ellipse()
{
    try {
        std::cout << R"(Reminder: For an ellipse, "A" must be greater than "B")"<< std::endl;
        std::cout << "Enter A: ";
        double a = 0;
        a = InputData(a, "Insert the number");
        a = ZeroCheck(a);
        std::cout << "Enter B: ";
        double b = 0;
        b = InputData(b, "Insert the number");
        b = ZeroCheck(b);
        while (a<=b)
        {
            std::cout << "B couldn`t be bigger then A" << std::endl;
            std::cout << "Enter A: ";
            a = InputData(a, "Insert the number");
            std::cout << "Enter B: ";
            b = InputData(b, "Insert the number");
        }
        CEllipse ellipse(a, b);
        std::cout << "Enter x: ";
        double x = 0;
        x = InputData(x, "Insert the number");
        ellipse.Calculating(x);
        ellipse.Display();
    }
    catch(int a)
    {
        if(a == -1)
        {
            std::cout << "B couldn't be bigger then A" << std::endl;
        }
    }
}

double CMenu::InputData(double number, const char *str) {
    bool validInput;
    std::cin.exceptions(std::ifstream::failbit);
    do
    {
        try
        {
            validInput = true;
            std::cin >> number;
        }
        catch (std::ios_base::failure &fail)
        {
            validInput = false;
            std::cin.clear();
            std::string dummy;
            std::cin >> dummy;
            std::cout << str << std::endl;
        }
    } while(!validInput);
    return number;
}

double CMenu::ZeroCheck(double number)
{
    while (number == 0)
    {
        std::cout<<"Division by zero is not possible" << std::endl;
        number = InputData(number, "Insert the number");
    }
    return number;
}
