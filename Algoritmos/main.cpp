/*
 * Copyright (c) 2023 Gabriel Barahona Otoya (@GabrielBO4)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/// @file main.cpp 
/// @brief Archivo fuente
/// @author Gabriel Barahona Otoya
/// @details En este archivo se encuentra la función principal donde se utilizan los algoritmos de ordenamiento. 

#include <iostream>
#include "headerSort.hpp"
#include <time.h>

using namespace std;

#define SIZE_ARRAY 10
#define LOW 0
#define HIGH 10

int array[SIZE_ARRAY];

/// @brief Función principal que pone a prueba los algoritmos de ordenamiento
int main(){

    randomArray(array, SIZE_ARRAY, 98201);
    cout << endl;
    /// El array se ordena mediante Bubble Sort
    bubbleSort(array, SIZE_ARRAY);
    cout << "bubbleSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 21744);
    cout << endl;
    /// El array se ordena mediante Selection Sort
    selectionSort(array, SIZE_ARRAY);
    cout << "selectionSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 73851);
    cout << endl;
    /// El array se ordena mediante Insertion Sort
    insertionSort(array, SIZE_ARRAY);
    cout << "insertionSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 56592);
    cout << endl;
    /// El array se ordena mediante Quick Sort
    quickSort(array, LOW, HIGH-1);
    cout << "quickSort: ";
    printArray(array, SIZE_ARRAY);
    cout << endl;

    return 0;
}