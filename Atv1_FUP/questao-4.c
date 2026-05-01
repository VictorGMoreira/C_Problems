#include <stdio.h>

unsigned int fat(unsigned int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}

unsigned int superfatorial(unsigned int n) {
    if (n <= 1) {
        return 1;
    } else {
        return fat(n) * superfatorial(n - 1);
    }
}

int main() {
    unsigned int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%u", &n);
    printf("Superfatorial de %u = %u\n", n, superfatorial(n));
    return 0;
}