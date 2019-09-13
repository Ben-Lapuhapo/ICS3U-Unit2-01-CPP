// Copyright (c) 2019 St. Mother Teresa HS All Rights Reserved.
//
// Created By: Ben Lapuhapo.
// Created on: Sep 2019.
// This program calculates the area and perimeter of a rectangle

#include <iostream>
#include <cmath>  //  You need to add this library for pow() function.

int main() {
    std::cout << "The circle's dimensions is R = 15" << std::endl;\
    std::cout << "" << std::endl;\
    std::cout << "The circle's perimeter is " << (2*M_PI*15.0) << std::endl;
    std::cout << "The circle's area is " << (M_PI*pow(15.0, 2.0)) << std::endl;
}
