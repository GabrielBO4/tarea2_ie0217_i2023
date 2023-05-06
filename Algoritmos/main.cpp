#include <iostream>
#include "headerSort.hpp"
#include <time.h>

using namespace std;

#define SIZE_ARRAY 10
#define LOW 0
#define HIGH 10

int array[SIZE_ARRAY];

int main(){

    randomArray(array, SIZE_ARRAY, 98201);
    cout << endl;
    bubbleSort(array, SIZE_ARRAY);
    cout << "bubbleSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 21744);
    cout << endl;
    selectionSort(array, SIZE_ARRAY);
    cout << "selectionSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 73851);
    cout << endl;
    insertionSort(array, SIZE_ARRAY);
    cout << "insertionSort: ";
    printArray(array, SIZE_ARRAY);

    cout << endl;
    cout << endl;
    randomArray(array, SIZE_ARRAY, 56592);
    cout << endl;
    quickSort(array, LOW, HIGH-1);
    cout << "quickSort: ";
    printArray(array, SIZE_ARRAY);
    cout << endl;

    return 0;
}