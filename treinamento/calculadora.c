#include <stdio.h>

int main(){
    long numero1, numero2;
    printf("Informe o número 1: ");
    scanf("%ld", &numero1);
    printf("Informe o número 2: ");
    scanf("%ld", &numero2);

    printf("\nSoma = %ld", numero1 + numero2);
    printf("\nSubtração = %ld", numero1 - numero2);
    printf("\nMultiplicação = %ld", numero1 * numero2);
    printf("\nDivisão = %.20f\n", (double) numero1 / (double) numero2);
}

