// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program finds the sum of all natural numbers preceding the
//     number inputted by the user


#include <iostream>
#include <string>

int main() {
    // This function finds the sum of all natural numbers preceding the
    //     number inputted by the user
    std::string natural_string;
    int counter;
    int sum;
    int natural_integer;

    // Input
    counter = 0;
    sum = 0;
    std::cout << "Enter a natural number (To Find Sum 1 to N): ";
    std::cin >> natural_string;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        natural_integer = std::stoi(natural_string);
        if (natural_integer <= 0) {
            std::cout << "You have not inputted a positive number, please"
                         " input a positive number!" << std::endl;
        } else {
            while (counter <= natural_integer) {
                sum = sum + counter;
                counter = counter + 1;
            }
            std::cout << "The Sum of all natural numbers 1 to "
            << natural_integer << " is " << sum << "!" << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "You have not inputted an integer, please input an integer"
                 " (natural number)!" << std::endl;
    }
}
