#include <stdio.h>

int main(void){
    int n;

    printf("Numero de 3 digitos: ");
    scanf("%d", &n);
    printf("Centena: %d\n", n/100);
    printf("Dezena: %d\n", (n / 10) % 10);
    printf("Unidades: %d\n", n % 10);

    return 0;
}