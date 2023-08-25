#include <stdio.h>

int main(){
    //Faça um programa que peça a nota de um aluno em uma prova e 
    //verifique se ele foi aprovado (nota maior ou igual a 6) ou reprovado (nota menor que 6).
    float nota;
    int bencaoDoProfessor = 0;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 6 && bencaoDoProfessor){
        printf("Você foi aprovado!\n");
    } else {
        printf("Você foi reprovado!\n");
    }
}