#include <stdio.h>

long soma_rec(int n){
    if (n == 1){
        return 1;
    }
    return n + soma_rec(n-1);
}

long soma_iter(int n){
    long soma = 0;
    for (int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Rec = %ld, Iter = %ld", soma_rec(n), soma_iter(n));

    return 0;
}