/*
Name: Ryan Montoyo
Date: July 10, 2024
Description: 

*/

#ifndef ABOUTDOG_H
#define ABOUTDOG_H

#include <string>
#include <iostream>

#define DOG_BIG 1   // 0001 bit 0 set
#define DOG_HAIRY 2 // 0010 bit 1 set 
#define DOG_BROWN 4 // 0100 bit 2 set
#define DOG_SMART 8 // 1000 bit 3 set

void AboutDog(std::string dog_name, unsigned int description);

#endif 
