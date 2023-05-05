## Estructuras Abstractas de Datos y Algoritmos para Ingeniería (IE-0217)
## Tarea #2
## Gabriel Barahona Otoya B70896


### Instrucciones de ejecución de cada programa:
#### Analice cada algoritmo y determine la complejidad que estos tienen utilizando la notación Big O (O grande).
Es un método de ordenamiento muy eficiente que utiliza la técnica de divide y vencerás para ordenar un arreglo de elementos. La idea
básica detrás del algoritmo es elegir un elemento pivote del arreglo y particionar el arreglo alrededor de ese elemento. Todos los
elementos menores que el pivote se colocan a la izquierda del pivote, y todos los elementos mayores se colocan a la derecha. Luego, el
proceso se repite recursivamente para los sub-arreglos antes y después del pivote hasta que todo el arreglo esté ordenado.
Su complejidad es O(n log n) en el mejor de los casos y en promedio, pero puede degenerar a O(n^2) en el peor de los casos si se elige
un pivote malo.
