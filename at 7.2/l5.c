#include <stdio.h>
#include <stddef.h>

struct Ruim {
    char a;
    int b;
    char c;
};

struct Bom {
    int b; 
    char a;
    char c;
};

int main(void){
    printf("Ruim: sizeof = %zu\n", sizeof(struct Ruim));
    printf("Bom: sizeof = %zu\n", sizeof(struct Bom));

    printf("offset Ruim:\n");
    printf("a: %zu\n", offsetof(struct Ruim, a));
    printf("b: %zu\n", offsetof(struct Ruim, b));
    printf("c: %zu\n", offsetof(struct Ruim, c));

    printf("offset Bom:\n");
    printf("a: %zu\n", offsetof(struct Bom, a));
    printf("b: %zu\n", offsetof(struct Bom, b));
    printf("c: %zu\n", offsetof(struct Bom, c));  

    return 0;
}

/*
Explique, pelos offsets, onde
está o padding em cada caso. Pratica: confirmar na prática a regra "do maior para o menor alinhamento" e
o interativo de padding da unidade.

Em ruim o padding existe entre a e b (1, 2, 3) e os três do final (9, 10, 11)
Em bom há apenas 2 bytes de padding (6, 7)
*/