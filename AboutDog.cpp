/*
Name: Ryan Montoyo
Date: July 10, 2024

*/

#include "AboutDog.h"

void AboutDog(std::string dog_name, unsigned int description) {

    std::cout << "This dog is called " << dog_name << ".";

    if (description != 0){
        std::cout << " It is";

        if ((description & DOG_BIG) != 0){
            std::cout << " big";
        }
        if ((description & DOG_HAIRY) != 0){
            std::cout << " hairy";
        }
        if ((description & DOG_BROWN) != 0){
            std::cout << " brown";
        }
        if ((description & DOG_SMART) != 0){
            std::cout << " smart";
        }

        std::cout << ".";
    }

}
