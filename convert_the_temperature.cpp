// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program convert the temperature

#include <iostream>

void ConvertTemperature() {
    float tc;
    float tf;

    // input
    std::cout << "Enter the temperature in degrees Celsius (°C): ";
    std::cin >> tc;

    // process
    tf = (9.0 / 5) * tc + 32;

    // output
    std::cout << "The temperature in degrees Fahrenheit is " << tf << "°F"
              << std::endl;
}


main() {
    // call functions
    ConvertTemperature();
}
