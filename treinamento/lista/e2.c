#include <stdio.h>

int main(){
    //Crie um programa que converta uma temperatura em graus Celsius para Fahrenheit.
    //Peça ao usuário para inserir a temperatura em Celsius e 
    //imprima a temperatura equivalente em Fahrenheit. 
    // C × 9/5 + 32 = F
    float celsius;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    printf("%.2f ºC = %.2f ºF\n", celsius, celsius * 9/5 + 32);
    
       
}