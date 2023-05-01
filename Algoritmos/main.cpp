#include <iostream>
#include "headerSort.hpp"
#include <time.h>

using namespace std;

#define SIZE_ARRAY 10

int array[SIZE_ARRAY];

void randomArray(int arr[], int n);
void printArray(int arr[], int n);

int main(){

    randomArray(array, SIZE_ARRAY);
    cout << endl;
    bubbleSort(array, SIZE_ARRAY);
    cout << "bubbleSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    randomArray(array, SIZE_ARRAY);
    cout << endl;
    selectionSort(array, SIZE_ARRAY);
    cout << "selectionSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    randomArray(array, SIZE_ARRAY);
    cout << endl;
    insertionSort(array, SIZE_ARRAY);
    cout << "insertionSort: ";
    printArray(array, SIZE_ARRAY);

    return 0;
}

void randomArray(int arr[], int n){
    srand(time(NULL));
    for(int i = 0; i < SIZE_ARRAY; i++){
        array[i] = rand() % 100;
    }
    cout << "Array: ";
    for(int i = 0; i < SIZE_ARRAY; i++){
        cout << array[i] << " ";
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < SIZE_ARRAY; i++){
        cout << array[i] << " ";
    }
}