#include <stdio.h>

int main(void){
    float n1, n2, n3, media;
    printf("Tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0;
    printf("Media: %.2f\n", media);
    
    return 0;
}