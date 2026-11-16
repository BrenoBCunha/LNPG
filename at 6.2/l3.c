#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n){
    int *v = malloc(n * sizeof(int));

    if (v == NULL) return NULL;

    for (int i=0; i<n; i++){
        v[i] = i+1;
    }
    return v;
}

int main(void){
    int *v = cria_sequencia(5);

    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i=0; i<5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}

/*
por que aqui devolver o ponteiro é certo (e devolver &x de
uma local seria errado — item 4 da Parte A)? Quem fica responsável pelo free ?
A função cria_sequencia() aloca e devolve a memória. O main() utiliza e libera essa memória.
Essa separação é importante porque, se você executasse free(v) dentro de cria_sequencia() antes de retornar v, estaria devolvendo um ponteiro para uma região de memória já liberada.
Neste exercício, a responsabilidade é do main(), pois ele recebe o ponteiro e utiliza a memória.

*/