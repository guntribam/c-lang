#include <stdio.h>

int main(){
    //Escreva um programa que classifique um dado número inteiro como positivo, negativo ou zero. 
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("O número é igual a zero!\n");
    } else if( numero > 0){
        printf("O número é positivo\n");
    } else {
        printf("O número é negativo\n");
    }
}