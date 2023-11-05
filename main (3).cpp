/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <string>

class Bebida {
public:
    Bebida(std::string nombre, double precio) {
        this->nombre = nombre;
        this->precio = precio;
    }

    std::string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }

private:
    std::string nombre;
    double precio;
};

int main() {
    // Crear dos objetos de la clase Bebida
    Bebida bebida1("Coca-Cola", 1.5);
    Bebida bebida2("Agua Mineral", 0.75);

    // Acceder a los atributos y mostrar información de las bebidas
    std::cout << "Bebida 1: " << bebida1.getNombre() << ", Precio: $" << bebida1.getPrecio() << std::endl;
    std::cout << "Bebida 2: " << bebida2.getNombre() << ", Precio: $" << bebida2.getPrecio() << std::endl;

    return 0;
}

