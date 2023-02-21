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
    std::string box_result1;
    box_result1 = box(5,3);
    std::cout << box_result1;
    std::cout << "\n------------------\n";
    
    std::string box_result2;
    box_result2 = box(4,4);
    std::cout << box_result2;
    std::cout << "\n------------------\n";
    
    
}
