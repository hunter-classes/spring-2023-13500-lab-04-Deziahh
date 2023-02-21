// functions.cpp

#include "functions.h"
#include <iostream>
#include <string>

//Task A: Box
int box(int height, int width){
    std::cout << "Shape:" << std::endl;
    
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    return 0;

}

int checkerboard(int height, int width){
    std::cout << "Shape:" << std::endl;
    for (int h = 0; h < height; h++){
        for (int w = 0; w < width; w++){
            if (h % 2 != 0 && w == 0 || w == width - 1){
                std::cout << " ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
