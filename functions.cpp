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

//Task E: Upper Triangle
int upper(int side){
    std::cout << "\nShape" << std::endl;
    
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            if (j >= i) {
                std::cout << "* ";
            } else {
            std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
        
    return 0;
}

int trapezoid(int height, int width){
    std::cout << "\nShape" << std::endl;
    
    int spaces = 0;
    int stars = width;
    
    for (int row = 0; row < height; ++row) {
        for (int col = height + row; col > 0; --col) {
            
            if (height % 6 == 1) {
                std::cout << "Impossible shape!" << std::endl;
                
                return 0;
            }
            std::cout << "  ";
        }
        
        for (int col = 0; col < (width - 2 * row); ++col) {
            std::cout << "* ";
            
            spaces += 1;
            stars -= 2;
        }
        std::cout << std::endl;
    }
    return 0;
}

//Task G: Checkerboard (3X3)
int check_three(int height, int width){
    std::cout << "\nShape" << std::endl;
    
    for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if ((i / 3) % 2 == (j / 3) % 2) {
                    std::cout << "* ";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }

        return 0;
    }
