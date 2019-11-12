// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which multiplies a number to the power of another.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what runs the program.
    std::string numberAsString;
    std::string powerAsString;
    int power;
    int number;
    int numberTotal = 1;
    int nextFullNumber;

    // Process
    while (true) {
        std::cout << "Input a positive number: ";
        std::cin >> numberAsString;
        std::cout << "" << std::endl;
        std::cout << "Input a number to multiply to the power of (must be"
                     " a positive/whole number: ";
        std::cin >> powerAsString;
        std::cout << "" << std::endl;

        try {
            number = std::stoi(numberAsString);
            power = std::stoi(powerAsString);

            if (power > 0) {
            // Output
                for (nextFullNumber = 0; nextFullNumber < power;
                     nextFullNumber++) {
                     numberTotal = (numberTotal*number);
                }
                std::cout << "Total = " << numberTotal << std::endl;
                break;
            } else {
                std::cout << "That was not a positive and/or whole number."
                << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a positive and/or whole number."
        << std::endl;
        }
    }
}
