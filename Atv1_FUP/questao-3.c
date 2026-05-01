#include <stdio.h>

int fat(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}

int fat_quad(int n) {
    return fat(2 * n) / fat(n);
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Fatorial quadruplo de %d = %d\n", n, fat_quad(n));
    return 0;
}