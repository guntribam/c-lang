

#include <stdio.h>


int main(){
    //Crie um programa que determine se um ano fornecido pelo usuário é bissexto ou não.
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }
}