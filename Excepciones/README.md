## Estructuras Abstractas de Datos y Algoritmos para Ingeniería (IE-0217)

## Tarea #2

## Gabriel Barahona Otoya B70896

### Instrucciones de ejecución de cada programa:
1. Para compilar los programas, ingrese el comando mingw32-make (Windows) o make (Linux) en la terminal.
2. El makefile está configurado para ejecutar los programas automaticamente.
3. Para realizar la ejecución de forma manual de los programas en Windows, ingrese el siguiente comando: .\exceptions.exe
4. Si utiliza Linux, la ejecución de forma manual de los programas se realiza ingresando el siguiente comando: ./exceptions
5. La documentación realizada con Doxygen se puede encontrar en la carpeta "html", especificamente en el archivo llamado "index" que, al darle doble click, despliega la página web en el buscador.

### Investigación:
#### Investigar sobre tres distintos tipos de excepciones incluidas en la librería estándar, y utilice estas mediante un pequeño código que dispare dichas excepciones:
- invalid_argument: Reporta errores que surgen porque no se ha aceptado un valor como argumento. Se implementó un código que dispara la excepción cuando se utiliza un número negativo para calcular el factorial de un número.
- runtime_error: Error relacionado con la lógica interna del programa. Informa sobre errores que se deben a eventos fuera del alcance del programa y que no se pueden predecir fácilmente. Se implementó un código que dispara la excepción cuando se coloca un 0 en el denominador de la división a realizar.
- out_of_range: Reporta errores que son consecuencia del intento de acceder a elementos fuera del rango definido. Puede ser lanzado por las funciones de acceso a miembros con verificación de límites. Se implementó un código que dispara la excepción cuando se intenta buscar algún elemento de un vector en un índice mayor al tamaño configurado.