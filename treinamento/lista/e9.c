#include <stdio.h>

int main(){
    //Crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário. 
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    for(int contador = 10; contador >= 1; contador--){
        printf("%d x %d = %d\n", numero, contador, numero * contador);    
    }
}