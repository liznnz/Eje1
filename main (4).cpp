/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <string>

class Bebida {
public:
    // Atributos de la clase
    std::string nombre;
    float precio;

    // Constructor de la clase
    Bebida(std::string nombre, float precio) {
        this->nombre = nombre;
        this->precio = precio;
    }
};

int main() {
    // Crear dos objetos de la clase Bebida
    Bebida bebida1("Coca-Cola", 2.5);
    Bebida bebida2("Agua Mineral", 1.0);

    // Acceder a los atributos de los objetos e imprimirlos
    std::cout << "Bebida 1: " << bebida1.nombre << " - Precio: $" << bebida1.precio << std::endl;
    std::cout << "Bebida 2: " << bebida2.nombre << " - Precio: $" << bebida2.precio << std::endl;

    return 0;
}
