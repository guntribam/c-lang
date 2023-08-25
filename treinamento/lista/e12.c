#include <stdio.h>

int main(){
    //Faça um programa que exiba a sequência de Fibonacci 
    //até um número específico fornecido pelo usuário. 
    //A sequência começa com 0 e 1, e cada termo subsequente é a soma dos dois anteriores.
    long termo1 = 0, termo2 = 1, somaTermos = 1;
    long limite;

    printf("Informe um número para que eu mostre a sequência de Fibonacci até esse número: ");
    scanf("%ld", &limite);

    while(somaTermos <= limite){
        printf("%ld\n", somaTermos);
        termo1 = termo2;
        termo2 = somaTermos;
        somaTermos = termo1 + termo2;
    }
}