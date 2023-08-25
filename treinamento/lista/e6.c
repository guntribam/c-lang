#include <stdio.h>


int main(){
    //Crie um programa que determine se um ano fornecido pelo usuário é bissexto ou não.
    int ano;
    
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("O ano é bissexto!\n");
    } else {
        printf("O ano não é bissexto!\n");
    }
}