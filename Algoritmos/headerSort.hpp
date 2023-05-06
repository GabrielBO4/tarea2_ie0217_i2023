/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/// @file headerSort.hpp 
/// @brief Archivo de encabezado
/// @author Gabriel Barahona Otoya
/// @details En este archivo se encuentran todas los prototipos de los algoritmos de ordenamiento. 

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

/// @brief Prototipo de la función del algoritmo de ordenamiento Bubble Sort
/// @param arr Array de enteros
/// @param n Tamaño del array
void bubbleSort(int arr[], int n);

/// @brief Prototipo de la función del algoritmo de ordenamiento Selection Sort
/// @param arr Array de enteros
/// @param n Tamaño del array
void selectionSort(int arr[], int n);

/// @brief Prototipo de la función del algoritmo de ordenamiento Insertion Sort
/// @param arr Array de enteros
/// @param n Tamaño del array
void insertionSort(int arr[], int n);

/// @brief Prototipo de la función del algoritmo de ordenamiento Quick Sort
/// @param arr Array de enteros
/// @param low Índice más bajo del arreglo
/// @param high Índice más alto del arreglo
void quickSort(int arr[], int low, int high);

/// @brief Prototipo de una función que crea un array de números aleatorios
/// @param arr Array de enteros
/// @param n Tamaño del array
/// @param seed Semilla para generar arrays diferentes
void randomArray(int arr[], int n, int seed);

/// @brief Prototipo de una función que imprime un array
/// @param arr Array de enteros
/// @param n Tamaño del array
void printArray(int arr[], int n);

#endif /* HEADER_SORT_HPP */
