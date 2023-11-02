/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <vector>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

float promedio(const std::vector<int>& arreglo) {
    if (arreglo.empty()) {
        return 0.0f; // Promedio indefinido para arreglo vacío.
    }

    int suma = 0;
    for (int elemento : arreglo) {
        suma += elemento;
    }

    return static_cast<float>(suma) / arreglo.size();
}

int main() {
    int numero;
    std::cout << "Ingresa un número para verificar si es primo: ";
    std::cin >> numero;

    if (is_prime(numero)) {
        std::cout << numero << " es un número primo." << std::endl;
    } else {
        std::cout << numero << " no es un número primo." << std::endl;
    }

    int n;
    std::cout << "Ingresa la cantidad de elementos en el arreglo: ";
    std::cin >> n;

    std::vector<int> arreglo(n);
    std::cout << "Ingresa " << n << " enteros separados por espacios: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arreglo[i];
    }

    float prom = promedio(arreglo);
    std::cout << "El promedio de los elementos es: " << prom << std::endl;

    return 0;
}
