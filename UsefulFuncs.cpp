// THIS CONSOLE APP IS NOT DONE YET


#include "UsefulFuncs.h"
#include "SortingAlgorithms.h"
#include <windows.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#define SIZE 1000
#define WHITE 7
#define RED 12

int UsefulFuncs::program()
{
    SortingAlgorithms algorithms;
    UsefulFuncs funcs;
    int *ptr;
    ptr = funcs.randomArrayGenerator();


    algorithms.bubbleSort(ptr, SIZE);

    return 0;
}

void UsefulFuncs::swap(int *number1, int *number2)
{
    int temporary = *number1;
    *number1 = *number2;
    *number2 = temporary;
}

int *UsefulFuncs::randomArrayGenerator()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    static int arry[SIZE];
    srand(time(NULL));
    SetConsoleTextAttribute(hConsole, RED);
    std::cout << "Unsorted Array: ";
    SetConsoleTextAttribute(hConsole, WHITE);

    for (int i = 0; i < SIZE; i++)
    {
        arry[i] = rand() % 900;
        std::cout << std::setw(4) << arry[i];
    }
    std::cout << std::endl;
    return arry;
}

