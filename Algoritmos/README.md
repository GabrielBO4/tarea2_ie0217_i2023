## Estructuras Abstractas de Datos y Algoritmos para Ingeniería (IE-0217)

## Tarea #2

## Gabriel Barahona Otoya B70896

### Instrucciones de ejecución de cada programa:
1. Para compilar los programas, ingrese el comando mingw32-make (Windows) o make (Linux) en la terminal.
2. El makefile está configurado para compilar y ejecutar los programas en Linux automaticamente.
3. Para realizar la ejecución de forma manual de los programas en Windows, ingrese el siguiente comando: .\algoritmos.exe
4. Si utiliza Linux, la ejecución de forma manual de los programas se realiza ingresando el siguiente comando: ./algoritmos

### Investigación:
#### Analizar cada algoritmo y determinar la complejidad que estos tienen utilizando la notación Big O (O grande):
- Complejidad: Se refiere a que tanto empeora el rendimiento del programa conforme se aumenta el tamaño de la entrada. En este caso depende de la cantidad de elementos en un arreglo.
- Bubble Sort: Es un algoritmo de ordenamiento simple que recorre un arreglo varias veces y compara elementos adyacentes para intercambiarlos si están en el orden incorrecto. El algoritmo continúa hasta que no se realicen más intercambios. Su complejidad es O(n^2) en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista. La cantidad de comparaciones a realizar corresponde a n(n+1)/2.
- Selection Sort: Este algoritmo recorre el arreglo, selecciona el elemento más pequeño y lo coloca en la posición correcta. Luego, se repite el proceso con los elementos restantes. Su complejidad es O(n^2) en el peor de los casos, ya que tiene que buscar el elemento menor en cada iteración y colocarlo en la posición correcta.
- Insertion Sort: Este algoritmo toma cada elemento del arreglo y lo inserta en la posición correcta en la parte ya ordenada de este. Su complejidad es O(n^2) en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista y mover los elementos a una posición correcta.
- Quick Sort: La función principal del algoritmo es elegir un elemento pivote del arreglo y particionar el arreglo alrededor de ese elemento. Todos los elementos menores que el pivote se colocan a la izquierda de este, y todos los elementos mayores se colocan a la derecha. Luego, el proceso se repite recursivamente para los sub-arreglos antes y después del pivote hasta que todo el arreglo esté ordenado. Su complejidad es O(n log n) en el mejor de los casos y en el caso promedio, pero puede degenerar a O(n^2) en el peor de los casos si se elige un pivote no tan bueno.

