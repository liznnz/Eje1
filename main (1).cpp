/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

bool is_prime(int num) {
    if (num < 2)
        return false;
        
    for (int i = 2; i < num; i ++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

float promedio(int arg[10], int num){
    float acum = 0;
    for (int i = 0; i < num; i++){
        acum = acum + arg[i];
        std::cout << "arg[i]" << arg[i] << " " << "acum" << acum << std::endl;
    }
    acum = acum / num;
    return acum;
}

int main(){
    int variable = 500;
    std::cout << is_prime(variable) << std::endl;
    std::cout << is_prime(2) << std::endl;
    std::cout << is_prime(16) << std::endl;
    std::cout << is_prime(7) << std::endl;
    
    int numeros[7] = {1,2,3,4,5,6,7};
    std::cout << promedio(numeros,7) << std::endl;
    
    int arreglo[10];
    arreglo[0] = 1;
    arreglo[1] = 11;
    arreglo[2] = 1001;
return 0;
}
    