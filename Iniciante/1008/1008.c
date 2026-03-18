#include <stdio.h>
 
int main() {
 
   int NUMBER, HORAS;
   float DH;
   scanf("%d %d %f", &NUMBER, &HORAS, &DH);
   printf("NUMBER = %d\n", NUMBER);
   printf("SALARY = U$ %.2f\n",(HORAS*DH) );

    return 0;
}