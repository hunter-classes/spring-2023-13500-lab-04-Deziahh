/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab4a

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

#include <string>

#include "functions.h"

int main(){
    //BOX TESTS
    std::cout << "\nBOX TESTS:" << std::endl;
    std::string box_result1;
    box_result1 = box(5,3);
    std::cout << box_result1;
    std::cout << "\n------------------\n";
    
    std::string box_result2;
    box_result2 = box(6,11);
    std::cout << box_result2;
    std::cout << "\n------------------\n";
    
    //CHECKERBOARD TESTS
    std::cout << "CHECKERBOARD TESTS:" << std::endl;
    std::string check_result1;
    check_result1 = checkerboard(6,11);
    std::cout << check_result1;
    std::cout << "\n------------------\n";
    
    std::string check_result2;
    check_result1 = checkerboard(5,9);
    std::cout << check_result2;
    std::cout << "\n------------------\n";
    
    //CROSS TESTS
    std::cout << "CROSS TESTS:" << std::endl;
    std::string cross_result1;
    check_result1 = cross(8);
    std::cout << cross_result1;
    std::cout << "\n------------------\n";
    
    std::cout << "CROSS TESTS:" << std::endl;
    std::string cross_result2;
    check_result2 = cross(10);
    std::cout << cross_result2;
    std::cout << "\n------------------\n";
    
    
}
