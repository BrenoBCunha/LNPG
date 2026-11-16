#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *v = malloc(5 * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        v[i] = i + 1;
    }

    printf("%d\n", v[2]); // Acesso válido

    free(v);
    v = NULL;

    return 0;
}

/*
Pergunta: qual a diferença entre este erro e o vazamento do L4? (Dica: um usa memória que já devolveu;
o outro nunca devolve a memória.)

No L4 (memory leak), o programa aloca memória com malloc(), mas não a libera com free(), causando vazamento de memória.

No L5 (heap-use-after-free), o programa libera a memória corretamente, mas tenta acessá-la posteriormente por meio de um ponteiro que ainda contém seu endereço antigo.
*/