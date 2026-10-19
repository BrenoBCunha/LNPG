#include <stdio.h>
#include "mathlib.h"

int main(void) {
    printf("Maior: %d\n", maior(5, 9));
    printf("Fatorial: %ld\n", fatorial(5));

    return 0;
}


/*
Pergunta: o que acontece se você esquecer mathlib.o no
comando de ligação?

Resposta: O ligador apresentará um erro de referência indefinida (undefined reference), 
pois não encontrará as implementações das funções maior e fatorial, 
impedindo a criação do executável.
*/