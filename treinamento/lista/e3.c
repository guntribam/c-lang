#include <stdio.h>

int main(){
    //Escreva um programa que calcule e imprima a área de um triângulo. 
    //Peça ao usuário para inserir a base e a altura do triângulo.
    float base, altura;

    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%f", &altura);

    printf("A área do triângulo = %f\n", base * altura / 2);
 
}