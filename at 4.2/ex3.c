#include <stdio.h>

void divmod(int a, int b, int *q, int *r){
    *q = a/b;
    *r = a%b;
}

int main(void){
    int x, y;
    int q = 0;
    int r = 0;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    divmod(x, y, &q, &r);
    printf("Quociente: %d, Resto: %d\n", q, r);
    return 0;
}