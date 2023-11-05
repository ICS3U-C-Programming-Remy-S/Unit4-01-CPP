// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user
// for a integer and it will tell them the sum
// of all the numbers added to it with try catch

#include <iostream>
#include <string>

int main() {
    // Declare userYearAsString
    std::string userNumberAsString;

    // initialize counter and sum variables
    int counter = 0;
    int sum = 0;

    // Get the userNumberAsString and display a message about the program
    std::cout << "This program will ask the user";
    std::cout << " for a integer and it will tell them the sum";
    std::cout << " of all the numbers added to it.";
    std::cout << "\nEnter your integer: ";
    std::cin >> userNumberAsString;

    try {
        // Convert userNumberAsString to int
        int userNumberAsInt = std::stoi(userNumberAsString);

        // check if user number is negative
        if (userNumberAsInt < 0) {
            // display that user number is not positive
            std::cout << userNumberAsInt << " is not a positive int."
            << std::endl;
        } else {
            while (counter <= userNumberAsInt) {
                // calculate sum
                sum = sum + counter;

                // increment counter
                counter = counter + 1;

                // display how may times it loops
                std::cout << "The loop ran " << counter << " times."
                << std::endl;
            }
            // display sum
            std::cout << "\nThe sum of the numbers from 0 to "
            << userNumberAsInt << " = " << sum << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user year was not valid
        std::cout << userNumberAsString << " is not a valid int." << std::endl;
    }
}
