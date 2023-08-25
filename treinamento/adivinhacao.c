#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Definição de variáveis
    int numeroSecreto;
    int chute, tentativas, contaTentativas = 0;
    int jogoDeveContinuar = 1;

    srand(time(NULL)); // inicia a semente para números aleatórios

    numeroSecreto = rand() % 51; // gera um número de 0 a 50

    //Imprime o cabeçalho do jogo
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    
    printf("Informe o número de tentativas: ");
    scanf("%d", &tentativas);

    while(jogoDeveContinuar){
        contaTentativas++;
        printf("\nTentativa #%d\n", contaTentativas);
        printf("Qual é seu chute(0 a 50)? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute == numeroSecreto){
            printf("Parabéns você acertou o número secreto\n");
            jogoDeveContinuar = 0;
        } else {
            if(chute > numeroSecreto){
                printf("O número secreto é menor!\n");
            } else {
                printf("O número secreto é maior!\n");
            }
            if(contaTentativas == tentativas){
                jogoDeveContinuar = 0;
            }
        }
    }
}

