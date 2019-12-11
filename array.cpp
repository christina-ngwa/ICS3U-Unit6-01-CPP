// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina ngwa
// Created on: December 2019
// This program finds the average of random numbers

#include <iostream>
#include <iomanip>
#include <ctime>


main() {
    // this function uses an array

    int myNumbers[10];
    float avg = 0;
    int num;

    // initialize random seed:
    unsigned int seed = time(NULL);

    // output
    std::cout << "Let's find the average of random numbers." << std::endl;
    // process
    for (int counter = 0; counter < 10; counter++) {
        num = rand_r(&seed) % 100 + 1;
        myNumbers[counter] = num;
        std::cout << myNumbers[counter] << " . ";
        avg = avg + myNumbers[counter];
    }
    avg = avg / 10;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "The average of these 10 numbers is: "
    << avg << std::endl;
}
