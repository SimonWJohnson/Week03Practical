// Week03Prac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ApplePie.h"
#include "RaspberryPie.h"
#include "ApricotPie.h"

int main()
{
    // quick local variable test
    ApplePie apple;
    RaspberryPie raspberry;

    std::cout << apple.description() << std::endl;
    std::cout << raspberry.description() << std::endl;

    return 0;
}


