#include <stdio.h>

int main(void){
    const int ANO_ATUAL = 2026;
    int ano;

    printf("Ano de nascimento: ");
    scanf("%d", &ano);
    
    printf("Idade: %d\n", ANO_ATUAL - ano);

    return 0;
}