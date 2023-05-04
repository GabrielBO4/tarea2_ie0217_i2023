#include <iostream>
#include "headerSort.hpp"
#include <time.h>
#include "headerSort.hpp"

using namespace std;


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


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}