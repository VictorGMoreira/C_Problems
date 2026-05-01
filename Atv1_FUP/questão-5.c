#include <stdio.h>

double potencia(double base, double exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * potencia(base, exp - 1);
    }
}

double hiperfatorial(double n) {
    if (n <= 1) {
        return 1;
    } else {
        return potencia(n, n) * hiperfatorial(n - 1);
    }
}

int main() {
    double n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%lf", &n);
    printf("Hiperfatorial de %.0f = %.0f\n", n, hiperfatorial(n));
    return 0;
}