#include <stdio.h>

void dobra(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] *= 2;
    }
}

int main(void){
    int v[5] = {2, 4, 6, 8, 10};
    printf("Vetor original: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    dobra(v, 5);
    printf("Vetor dobrado: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}