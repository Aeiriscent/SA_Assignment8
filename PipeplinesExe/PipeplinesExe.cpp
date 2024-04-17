// PipeplinesExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\Application\Application.h"

int main()
{
    std::cout << "Hey look we got it to work, I assume this is what you wanted for the third pull request (just a changed cout to show the PR works)\n";
    CoolClass coolClass;
    std::cout << "Calc " << coolClass.Calc(1, 2);
}

