#include <iostream>
#include "../include/utils.h"

int main() {
    double x = 1.5708; // Cerca de PI/2
    int n = 5;
    
    // Usamos std:: explícito (No using namespace)
    std::cout << "Calculando Taylor para x = " << x << std::endl;
    std::cout << "Resultado: " << calcular_seno_taylor(x, n) << std::endl;
    
    return 0;
}