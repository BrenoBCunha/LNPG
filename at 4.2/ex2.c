#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int x, y;
    printf("Digite dois numeros x e y, respectivamente: ");
    scanf("%d %d", &x, &y);
    printf("Antes da troca: x = %d | y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d | y = %d\n", x, y);
    return 0;
}

/*
Pergunta: por que isso não
funcionaria se troca recebesse int a, int b (por valor)?

Resposta: Porque a passagem por valor cria cópias das variáveis, 
fazendo com que as alterações ocorram apenas dentro da função, sem modificar os valores originais de x e y no main.                                                                                                                                                                                                                                                
*/