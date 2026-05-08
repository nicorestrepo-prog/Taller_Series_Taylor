#include "../include/utils.h"
#include <cmath>

double factorial(int n) {
    double res = 1.0;
    for (int i = 1; i <= n; i++) { // For clásico
        res *= i;
    }
    return res;
}

double calcular_seno_taylor(double x, int terminos) {
    double suma = 0.0;
    for (int n = 0; n < terminos; n++) { // For clásico
        double numerador = std::pow(-1, n) * std::pow(x, 2 * n + 1);
        double denominador = factorial(2 * n + 1);
        suma += numerador / denominador;
    }
    return suma;
}