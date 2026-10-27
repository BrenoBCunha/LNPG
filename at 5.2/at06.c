#include <stdio.h>

int main(void){
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    v[10] = 10;

    printf("fim\n");

    return 0;
}

/*
Pergunta: o programa "funcionava" sem o -fsanitize=address ? O que o sanitizer mudou?

O programa não rodou sem nem com o sanitize. o Erro apresentado ao rodar o programa sem o sanitize foi o seguinte:

fim
*** stack smashing detected ***: terminated
Abortado

O programa foi abortado e indicou smashing detected.


Ao rodar utilizando o sanitize apareceu algo similar ele indicou exatamente o problema do programa
==45366==ERROR: AddressSanitizer: stack-buffer-overflow on address 0x704403800058 at pc 0x60d62415c57e bp 0x7ffea53a38e0 sp 0x7ffea53a38d0
 Indica exatamente o erro de buffer overflow
*/