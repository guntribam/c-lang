#include <stdio.h>

int main(){
    double numero1, numero2;

    printf("Informe o número 1: ");
    scanf("%lf", &numero1);
    printf("Informe o número 2: ");
    scanf("%lf", &numero2);

    printf("Divisão = %.20lf\n", numero1 / numero2);

}