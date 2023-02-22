// functions.cpp

#include "functions.h"
#include <iostream>
#include <string>

//Task A: Box
int box(int height, int width){
    std::cout << "\nShape:" << std::endl;
    
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    return 0;

}

//Task B: Checkerboard
int checkerboard(int height, int width){
    std::cout << "\nShape:" << std::endl;
    
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

//Task C: Cross
int cross(int size){
    std::cout << "\nShape:" << std::endl;
    
    int width = size;
    
    for (int s = 0; s < size + 1; s++){
        for (int w = 0; w < width + 1; w++){
            if (s == w || w == size-s){
                std::cout << "* ";
            }  else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

//Task D: Lower Triangle
int lower(int side){
    std::cout << "\nShape:" << std::endl;
    
    for (int i = 0; i <= side; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
