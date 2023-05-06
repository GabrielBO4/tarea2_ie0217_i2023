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

/// @file sort.cpp 
/// @brief Archivo de encabezado
/// @author Gabriel Barahona Otoya
/// @details En este archivo se encuentran todas las implementaciones de los algoritmos de ordenamiento. 

#include <iostream>
#include "headerSort.hpp"
#include <time.h>
#include "headerSort.hpp"

using namespace std;

/// @brief Implementación del algoritmo de ordenamiento Bubble Sort
/// @param arr Array que se va a ordenar
/// @param n Tamaño del array
/// recorre un arreglo varias veces y compara elementos adyacentes para intercambiarlos si están en el orden incorrecto. 
/// El algoritmo continúa hasta que no se realicen más intercambios.
void bubbleSort(int arr[], int n){
    int temp = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 
}

/// @brief Implementación del algoritmo de ordenamiento Selection Sort
/// @param arr Array que se va a ordenar
/// @param n Tamaño del array
/// Recorre el arreglo, selecciona el elemento más pequeño y lo coloca en la posición correcta. 
/// Luego, se repite el proceso con los elementos restantes.
void selectionSort(int arr[], int n){
    int smallestIndex = 0;
    int temp = 0;
    for(int i = 0; i < n - 1; i++){
        smallestIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
    }
}

/// @brief Implementación del algoritmo de ordenamiento Insertion Sort
/// @param arr Array que se va a ordenar
/// @param n Tamaño del array
/// Toma cada elemento del arreglo y lo inserta en la posición correcta en la parte ya ordenada de este.
void insertionSort(int arr[], int n){
    int actual;
    int varComp;
    for(int i = 1; i < n; i++){
        actual = arr[i];
        varComp = i - 1;
        while((varComp >= 0) && (actual < arr[varComp])){
            arr[varComp + 1] = arr[varComp];
            varComp--;
        }
        arr[varComp + 1] = actual;
    }
}

/// @brief Implementación del algoritmo de ordenamiento Insertion Sort
/// @param arr Array que se va a ordenar
/// @param low Índice más bajo del arreglo
/// @param high Índice más bajo del arreglo
/// Elige un elemento pivote del arreglo y particionar el arreglo alrededor de ese elemento. 
/// Todos los elementos menores que el pivote se colocan a la izquierda de este, y todos los elementos mayores se colocan a la derecha. 
/// Luego, el proceso se repite recursivamente para los sub-arreglos antes y después del pivote hasta que todo el arreglo esté ordenado.
void quickSort(int arr[], int low, int high){
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/// @brief Implementación de la función que crea un array con números aleatorios
/// @param arr Array que se va a ordenar
/// @param n Tamaño del array
/// @param seed Semilla para generar arrays con diferentes números
void randomArray(int arr[], int n, int seed){
    srand(seed);
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }
    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

/// @brief Implementación de la función que imprime el array
/// @param arr Array
/// @param n Tamaño del array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}