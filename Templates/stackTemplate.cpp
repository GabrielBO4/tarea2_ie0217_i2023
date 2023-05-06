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

/// @file stackTemplate.cpp 
/// @brief Archivo fuente
/// @author Gabriel Barahona Otoya
/// @details En este archivo se encuentran todas las implementaciones del apartado de templates. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <functional>


/// @class Stack
/// @brief Implementación de clase pila mediante templates.
template<typename T>
class Stack {
private:
  /// @brief Se define un vector como atributo privado.
  std::vector<T> data_;

public:

  /// @brief Implementación del método para hacer push a un elemento.
  /// @param value Recibe un parámetro de tipo T.
  void push(T value) {
    data_.push_back(value);
  }

  /// @brief Implementación del método para obtener un valor dentro del vector.
  /// @param index Recibe un índice para extraer algún valor del vector.
  /// @return Retorna el valor que se encuentra en esa posición.
  T getValue(int index){
    return data_[index];
  }


  /// @brief Implementación del método para hacer pop a un elemento.
  /// @return Retorna el elemento al que se le hizo pop.
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /// @brief Implementación del método para eliminar todos los elementos del vector.
  void clear() {
    data_.clear();
  }

  /// @brief Implementación de un método para verificar si el vector está vacío.
  /// @return Retorna verdadero o falso dependiendo de si el vector tiene elementos o no.
  bool empty() const {
    return data_.empty();
  }

  /// @brief Implementación de un método para obtener el tamaño de un vector.
  /// @return Retorna el tamaño del vector.
  std::size_t size() const {
    return data_.size();
  }

  /// @brief Este método se encarga de aplicar una función a cada elemento del vector sin tener que utilizar bucles o iteradores.
  /// @param func Función dada.
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};


/// @brief Función principal que contiene la utilización de la clase. 
int main() {
  /// @brief Se crea una pila para valores de tipo entero llamada s.
  Stack<int> s;
  /// @brief Se agregan varios números al vector.
  s.push(2021);
  s.push(2054);
  s.push(6524);

  /// @brief Imprime el tamaño de la pila.
  std::cout << "Stack size: " << s.size() << std::endl;

  /// @brief Imprime cada una de los números agregados al vector.
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  /// Código que imprime los números del vector a los que se les va haciendo pop. También dispara una excepción.
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  /// @brief se crea una pila para valores de tipo char llamada g.
  Stack<char> g;
  /// @brief Se agregan varias letras al vector.
  g.push('l');
  g.push('e');
  g.push('i');
  g.push('r');
  g.push('b');
  g.push('a');
  g.push('G');

  /// @brief Imprime el tamaño de la pila.
  std::cout << "Stack size: " << g.size() << std::endl;

  /// @brief Imprime cada una de las letras agregadas al vector.
  g.foreach([](char& value) {
    std::cout << "Letter: " << value << std::endl;
  });

  /// Código comentado que dispararía la excepción out_of_range
  // try {
  //   unsigned int indice = 25;
  //   if (indice >= g.size()) {
  //     throw std::out_of_range("Error: Indice fuera de rango");
  //   }
  //   char letra = g.getValue(indice);
  //   std::cout << "La letra es: " << letra << std::endl;
  //   } catch (std::out_of_range& e) {
  //     std::cerr << e.what() << std::endl;
  //   }

  /// Código que imprime las letras del vector a las que se les va haciendo pop. También dispara una excepción.
  try {
    while (!g.empty()) {
      char value = g.pop();
      std::cout << "Popped letter: " << value << std::endl;
    }
    std::cout << "Stack size: " << g.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
