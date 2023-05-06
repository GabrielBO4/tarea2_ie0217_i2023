/*
 * Copyright (c) 2023 Gabriel Barahona Otoya (@GabrielBO4)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/**
 * @file exceptions.hpp 
 * @brief Archivo de encabezado
 * @author Gabriel Barahona Otoya
 * @details En este archivo se encuentra el prototipo de las clases y los métodos. 
 */

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <exception>

/**
 * @class MyException
 * @brief Prototipo de la clase MyException que crea un excepción personalizada.
 * La función what() es un miembro de la clase base std::exception.
 * En este caso, se está sobrescribiendo la función what() en la clase MyException para proporcionar un mensaje de error personalizado. 
 * El especificador throw() indica que esta función no lanza excepciones.
 */

class MyException : public std::exception {
public:
    const char* what() const throw();
};











#endif // EXCEPTIONS