#include <stdio.h>

int fat_duplo(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fat_duplo(n - 2);
    }
}

int main() {
    int n;
    printf("Digite um numero natural impar: ");
    scanf("%d", &n);
    printf("%d!! = %d\n", n, fat_duplo(n));

    return 0;
}