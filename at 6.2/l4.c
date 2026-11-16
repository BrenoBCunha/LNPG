#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

void aloca(void) {
    int *bloco = malloc(1000 * sizeof(int));

    if (bloco == NULL) {
        return;
    }

    bloco[0] = 1;

    free(bloco);
}

int main(void) {
    aloca();
    return 0;
}

/*
Pergunta: sem a ferramenta, dá para perceber o vazamento só rodando? Quantos bytes vazaram?
Não, normalmente não. O programa executa e termina sem apresentar erros visíveis.
Isso acontece porque malloc() reserva memória no heap, mas a função aloca() termina sem executar free(bloco).
vazaram 4.000 bytes (1000 * 4)

*/