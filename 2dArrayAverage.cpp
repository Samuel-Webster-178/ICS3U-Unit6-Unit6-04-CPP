// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <time.h>
#include <iostream>
#include <random>


template <int rows, int cols>
int averageOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    int average = 0;
    int arrayLength;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            average += passedIn2DList[rowElement][columnElement];
    }
    arrayLength = sizeof(passedIn2DList)/sizeof(passedIn2DList[0]);
    arrayLength = sizeof(passedIn2DList[0])
    /sizeof(passedIn2DList[0][0]) * arrayLength;
    average = average / arrayLength;

    return average;
}


int main() {
    // this function uses a 2D array

    int aRandomNumber = 0;
    int average = 0;
    const int rows = 3;
    const int columns = 4;
    int a2DList[rows][columns];


    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());
            std::uniform_int_distribution<int> idist(1, 50);
            aRandomNumber = idist(rgen);
            a2DArray[rowElement][columnElement] = aRandomNumber;
            std::cout << aRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    average = averageOfNumbers(a2DArray);
    std::cout << "The average of all the numbers is: " << average << std::endl;
}
