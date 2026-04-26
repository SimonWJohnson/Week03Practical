// Week03Prac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ApplePie.h"
#include "RaspberryPie.h"
#include "ApricotPie.h"

int main()
{
    int selection = 0;
    Pie* piePtr = nullptr;

    while (piePtr == nullptr) 
    {
        std::cout << "Choose a pie:" << std::endl;
        std::cout << "1. Apple Pie" << std::endl;
        std::cout << "2. Rapsberry Pie" << std::endl;
        std::cout << "3. Apricot Pie" << std::endl;
        std::cout << "Enter choice: " << std::endl;
        std::cin >> selection;

        if (selection == 1)
        {
            piePtr = new ApplePie();
        }
        else if (selection == 2)
        {
            piePtr = new RaspberryPie();
        }
        else if (selection == 3)
        {
            piePtr = new ApricotPie();
        }
        else
        {
            std::cout << "Invalid selection" << std::endl;
            //return 0;
            continue;
        }
    }

    std::cout << "You chose: " << piePtr->description() << std::endl;

    delete piePtr;
    piePtr = nullptr;
    return 0;

}


