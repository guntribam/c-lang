#include <stdio.h>
#include <math.h>

int main(){
    //Crie um programa que leia um número inteiro e imprima seu quadrado e cubo.
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    printf("Número = %d\nQuadrado = %d\nCubo = %d\n", numero, numero * numero, numero * numero * numero);
}