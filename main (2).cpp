#include <iostream>

float aprox_pi(int n){
    int band = 0;
    float acum = 0;
    for (int i = 1; i <= n; i = i + 2){
        if (band == 0){
            acum = acum + 1.0 / i;
            band = 1;
        }else{
            acum = acum - 1.0 / i;
            band = 0;
        }
    }
    return 4 * acum;
}

float maximo(float arg [100], int n){
    float max = arg [0];
    for (int i = 1; i < n; i++){
        if (max < arg[i])
            max = arg[i];
    }
    return max;
}

int main(){
    int n;
    
    std::cout << "dame el valor de n" << std::endl;
    std::cin >> n;
    std::cout << "aproxima Pi con " << n << " es " << aprox_pi(n) << std::endl;
    
    float arreglo[8] = {4434.4,435.33,12.0,432.13,554.2,111.1,0.11,8};
    std::cout << "max" << maximo(arreglo,8) << std::endl;
    
    return 0;
}