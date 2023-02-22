/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab #4
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
    
    std::string box_result2;
    box_result2 = box(6,11);
    std::cout << box_result2;
    
    std::cout << "\n------------------\n";
    
    //CHECKERBOARD TESTS
    std::cout << "CHECKERBOARD TESTS:" << std::endl;
    std::string check_result1;
    check_result1 = checkerboard(6,11);
    std::cout << check_result1;
    
    std::string check_result2;
    check_result1 = checkerboard(5,9);
    std::cout << check_result2;
    
    std::cout << "\n------------------\n";
    
    //CROSS TESTS
    std::cout << "CROSS TESTS:" << std::endl;
    std::string cross_result1;
    check_result1 = cross(8);
    std::cout << cross_result1;
    
    std::cout << "CROSS TESTS:" << std::endl;
    std::string cross_result2;
    check_result2 = cross(10);
    std::cout << cross_result2;
    
    std::cout << "\n------------------\n";
    
    //LOWER TESTS
    std::cout << "LOWER TESTS:" << std::endl;
    std::string lower_result1;
    lower_result1 = lower(6);
    std::cout << lower_result1;
    
    std::string lower_result2;
    lower_result2 = lower(4);
    std::cout << lower_result2;
    
    std::cout << "\n------------------\n";
    
    //UPPER TESTS
    std::cout << "UPPER TESTS:" << std::endl;
    std::string upper_result1;
    upper_result1 = upper(5);
    std::cout << upper_result1;
    
    std::string upper_result2;
    upper_result2 = upper(8);
    std::cout << upper_result2;
    
    std::cout << "\n------------------\n";
    
    //TRAPEZOID TESTS
    std::cout << "TRAPEZOID TESTS:" << std::endl;
    std::string trap_result1;
    trap_result1 = trapezoid(5,12);
    std::cout << trap_result1;
    
    std::string trap_result2;
    trap_result2 = trapezoid(7,12);
    std::cout << trap_result2;
    
    std::cout << "\n------------------\n";
    
    //CHECKERBOARD (3X3) TESTS
    std::cout << "CHECKERBOARD (3x3) TESTS:" << std::endl;
    std::string c3_result1;
    c3_result1 = check_three(11,16);
    std::cout << c3_result1;

    std::string c3_result2;
    c3_result2 = check_three(27,27);
    std::cout << c3_result2;
    
    std::cout << "\n------------------\n";
}


