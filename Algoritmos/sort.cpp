#include "headerSort.hpp"

void bubbleSort(int arr[], int n){
    int temp = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j + 1]){
                temp = arr[j];
                arr[j]=arr[j + 1];
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

}