#include <stdio.h>

double potencia(double base, double exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * potencia(base, exp - 1);
    }
}

double fat_exponencial(double n) {
    if (n <= 1) {
        return 1;
    } else {
        return potencia(n, fat_exponencial(n - 1));
    }
}

int main() {
    double n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%lf", &n);
    printf("Fatorial exponencial de %.0f = %.0f\n", n, fat_exponencial(n));
    return 0;
}