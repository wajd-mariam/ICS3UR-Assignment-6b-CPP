// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program calculates the volume of the Tetrahedron

#include <iostream>
#include <cmath>
#include <iomanip>

void Calculate_volume(int side) {
    // this function calculates volume
    float volume;

    // process
    volume = (side*side*side) / (6 * sqrt(2));

    // output
    std::cout << "The volume of the Tetrahedron is " << volume
              << std::fixed << std::setprecision(2)<< "cm³"
              << std::endl;
    // default message
    std::cout << "\n";
    std::cout << "Thank you for using my program!" << std::endl;
}

main() {
    // this function calls functions
    // variables
    std::string side_from_user;
    int side_from_user_int;

    // welcome statement
    std::cout << "This program calculates Tetrahedron volume" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Enter length of Tetrahedron side(cm): ";
    std::cin >> side_from_user;
    // try catch statement
    try {
        side_from_user_int = std::stoi(side_from_user);

        // calling function if side_from_user is valid
        Calculate_volume(side_from_user_int);
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid entry, please try again";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "Thank you for using my program!" << std::endl;
    }
}
