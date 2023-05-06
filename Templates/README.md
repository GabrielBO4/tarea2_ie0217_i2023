## Estructuras Abstractas de Datos y Algoritmos para Ingeniería (IE-0217)

## Tarea #2

## Gabriel Barahona Otoya B70896

### Instrucciones de ejecución de cada programa:
1. Para compilar los programas, ingrese el comando mingw32-make (Windows) o make (Linux) en la terminal.
2. El makefile está configurado para compilar y ejecutar los programas en Linux automaticamente.
3. Para realizar la ejecución de forma manual de los programas en Windows, ingrese el siguiente comando: .\stackTemplate.exe
4. Si utiliza Linux, la ejecución de forma manual de los programas se realiza ingresando el siguiente comando: ./stackTemplate

### Investigación:
#### Verificar si todos los includes agregados son necesarios para la compilación del código dado. Esto es necesario realizarlo porque en ocasiones se incluyen headers totalmente innecesarios, y si el compilador no posee instrucciones de ignorar los archivos no utilizados, se agregará código extra innecesario.
- iostream: Declara los objetos que controlan la lectura y escritura en los flujos estándar de un programa de C++. Es necesario para la compilación ya que se utiliza cout y cerr. 
- vector: Es necesario para la compilación ya que en el programa se utilizan vectores, además proporciona una serie de funcionalidades realizadas con estos como por ejemplo push_back y pop_back. 
- algorithm: Define funciones para una variedad de propósitos, por ejemplo: buscar, ordenar, contar, manipular, que operan en rangos de elementos. En este caso es necesario usarlo ya que se utiliza for_each.
- stdexcept: Define un conjunto de excepciones estándar que tanto la biblioteca como los programas pueden usar para informar errores comunes. Con este include sucede algo particular y es que al comentarlo y ejecutar el código, igual compila y es ejecutado, según lo investigado es necesario para la compilación cuando se quiere implementar una instrucción que dispara por ejemplo un out_of_range.
- functional: Son objetos específicamente diseñados para ser utilizados con una sintaxis similar a la de las funciones. Es necesario para la compilación porque se utiliza std::function en una parte del código.
