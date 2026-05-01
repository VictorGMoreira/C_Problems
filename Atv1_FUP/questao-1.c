#include <stdio.h>

int binario(int n){
        if(n == 0){
            return 0;
        }else{
            binario(n/2);
            printf("%d", n % 2);
            return n;
        }
    }

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("%d em binario = ", n);
    binario(n);
    printf("\n");
    return 0;
}