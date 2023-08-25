#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int chute, numeroSecreto = rand() % 11, tentativas;
    int jogoDeveContinuar = 1, contador = 0;

    printf("Informe a quantidade de tentativas: ");
    scanf("%d", &tentativas);

    while(jogoDeveContinuar){
        contador++;
        printf("Tentativa #%d\n", contador);
        printf("Informe seu chute: ");
        scanf("%d", &chute);
        if(chute == numeroSecreto){
            printf("Você acertou!\n");
            jogoDeveContinuar = 0;
        } else {
            if(chute > numeroSecreto){
                printf("O número secreto é menor!\n");
            } else {
                printf("O número secreto é maior!\n");
            }
            if(contador >= tentativas){
                jogoDeveContinuar = 0;
            }
        }
    }
    
}