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

#include <iostream>
#include <exception>
#include <vector>
#include "exceptions.hpp"

using namespace std;

int main() {

    try {
        throw MyException();
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    int N = -5;
    int factorial = 1;
    try {
        if (N < 0) {
            throw invalid_argument("Error: No se permiten numeros negativos");
        }
        for (int i = N; i > 0; i--) {
            factorial *= i;
        }
        cout << "El factorial de " << N << " es " << factorial << endl;
    }
    catch (invalid_argument& e) {
        cerr << e.what() << endl;
    }


    int numerador = 4; 
    int denominador = 0; 
    int resultado;
    try{
        if (denominador == 0){
            throw runtime_error("Error: El denominador no puede ser cero");
        }
        resultado = numerador/denominador;
        cout << "El resultado de la división es: " << resultado << endl;
    } 
    catch (runtime_error& e) {
        cerr << e.what() << endl;
    }


    vector<int> v = {10, 20, 30, 40, 50};
    unsigned int indice = 6;
    try {
        int valor;
        if (indice >= v.size()) {
            throw out_of_range("Error: Indice fuera de rango");
        }
        valor = v[indice];
        cout << "El valor es: " << valor << std::endl;
    } catch (out_of_range& e) {
        cerr << e.what() << std::endl;
    }
    
    return 0;
}