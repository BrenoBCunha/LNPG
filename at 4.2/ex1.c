#include <stdio.h>

int maior(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

long fatorial(int n){
    long fat = 1;
    for (int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int main(void){
    int a, b, n;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    int m = maior(a, b);
    printf("O maior numero e: %d\n", m);
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);
    long f = fatorial(n);
    printf("Seu fatorial e: %ld\n", f);

    return 0;
}