#include <stdio.h>

int main(void){
    int v[4];
    double d[4];

    printf("Endereços do vetor int: \n");
    for(int i = 0; i < 4; i++){
        printf("v[%d] = %p\n", i, (void *)&v[i]);
    }

    printf("Endereços do vetor double: \n");
    for(int i = 0; i < 4; i++){
        printf("d[%d] = %p\n", i, (void *)&d[i]);
    }

    return 0;
}


/*
Pergunta: isso bate com a fórmula base + i × sizeof(tipo) ?

Sim, é possível observar isso atraves dos endereços em hexadecimal.

Endereços do vetor int: 
v[0] = 0x7ffdc03f37d0
v[1] = 0x7ffdc03f37d4
v[2] = 0x7ffdc03f37d8
v[3] = 0x7ffdc03f37dc
Endereços do vetor double: 
d[0] = 0x7ffdc03f37e0
d[1] = 0x7ffdc03f37e8
d[2] = 0x7ffdc03f37f0
d[3] = 0x7ffdc03f37f8

No vetor int o endereço passa de d0 -> d4, ou seja avança 4.
No vetor double o endereço passa de e0 -> e8, ou seja avança 8.

*/