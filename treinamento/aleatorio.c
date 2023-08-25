#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int random_number = rand() % 11; // Gera um número entre 0 e 10
    
    printf("Número aleatório de 0 a 10: %d\n", random_number);

    return 0;
}