#include <stdio.h>

void echo(void){
    char buf[8];
    fgets(buf, sizeof(buf), stdin);
    printf("Voce digitou: %s\n", buf);
}

int main(void){
    echo();
    return 0;
}


/*
Pergunta: o que, na pilha, o gets poderia sobrescrever se você
digitasse demais?

Resposta: O gets poderia sobrescrever outras variáveis locais, 
dados de controle da pilha e até o endereço de retorno da função, 
causando falhas no programa ou permitindo a execução de código malicioso.
*/