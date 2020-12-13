// Copyright (c) St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: December 2020
// this program takes a number from 1 - 12
//     & shows the month


#include <iostream>
#include <string>


int main() {
    // this function prints out the month
    char month;  // a single number

    // input
    std::cout << "letters a - c == october - december \n";
    std::cout << "Enter a number from 1 - 12: ";
    std::cin >> month;


    switch (month) {
        case '1' :
            std::cout << " January " << std::endl;
            break;
        case '2' :
            std::cout << " February " << std::endl;
            break;
        case '3' :
            std::cout << " March " << std::endl;
            break;
        case '4' :
            std::cout << " April " << std::endl;
            break;
        case '5' :
            std::cout << " May " << std::endl;
            break;
        case '6' :
            std::cout << " June " << std::endl;
            break;
        case '7' :
            std::cout << " July " << std::endl;
            break;
        case '8' :
            std::cout << " August " << std::endl;
            break;
        case '9' :
            std::cout << " September " << std::endl;
            break;
        case 'a' :
            std::cout << " October " << std::endl;
            break;
        case 'b' :
            std::cout << " November " << std::endl;
            break;
        case 'c' :
            std::cout << " December " << std::endl;
            break;
}
}
