// THIS CONSOLE APP IS NOT DONE YET


#include "SortingAlgorithms.h"
#include "UsefulFuncs.h"
#include <windows.h>
#include <iostream>
#include <chrono>
#include <iomanip>

UsefulFuncs useless;

void SortingAlgorithms::bubbleSort(int arr[], int size)
{
    auto start = std::chrono::high_resolution_clock::now();
    int c = 0;
    while (c < size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                useless.swap(&arr[i], &arr[i + 1]);
        }
        c++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "\n\n\nBubble Sorted array: ";
    for (int i = 0; i < size; i++)
        std::cout << std::setw(4) << arr[i];
    std::cout << "\n\n------------------> " << "Elapsed time during Bubble Sort: " << elapsed << " microseconds\n";

}

/*
void SortingAlgorithms::selectionSort(int arr[], int size)
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
    {       
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}
*/
