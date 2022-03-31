// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The month finder

#include <iostream>
#include <string>

int main() {
    // this function is a month finder
    std:: string NUMBER_AS_STRING;
    int NUMBER;

    std::cout << "The month finder";

    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> NUMBER_AS_STRING;
    
    NUMBER=atoi(NUMBER_AS_STRING.c_str());
    // process
    switch (NUMBER_AS_STRING) {
         case '1' :
           std::cout << "January" << std::endl;
           break;
        case '2' :
            std::cout << "February" << std::endl;
            break;
        case '3' :
            std::cout << "March" << std::endl;
            break;
        case '4' :
            std::cout << "April" << std::endl;
            break;
        case '5' :
            std::cout << "May" << std::endl;
            break;
        case '6' :
            std::cout << "June" << std::endl;
            break;
        case '7' :
            std::cout << "July" << std::endl;
            break;
        case '8' :
            std::cout << "August" << std::endl;
            break;
        case '9' :
            std::cout << "September" << std::endl;
            break;
        case 'A' :
            std::cout << "September" << std::endl;
            break;
        case 'B' :
            std::cout << "September" << std::endl;
            break;
        case 'C' :
            std::cout << "September" << std::endl;
            break;
            
        default :
            std::cout << "Not a month" << std::endl;
        }
    
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
