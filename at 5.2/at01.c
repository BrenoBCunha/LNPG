#include <stdio.h>

int main(void){
    int v[5], maior;
    float media;
    printf("Digite 5 inteiros: ");
    scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

    maior = v[0];
    for (int i = 1; i < 5; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }

    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5.0;

    printf("Maior: %d\n", maior);
    printf("Media: %.2f", media);

    return 0;
}