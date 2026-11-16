#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    double media;
    double soma = 0;
    printf("Tamanho: ");
    scanf("%d", &n);
    double *v = malloc(n * sizeof(double));
    if (v == NULL) return 1;

    for (int i=0; i<n; i++){
        scanf("%lf", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    printf("Média: %.2lf\n", media);

    free(v);
}