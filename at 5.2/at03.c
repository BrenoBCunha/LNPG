#include <stdio.h>

int main(void){
    char s[50];
    int len = 0;
    printf("Digite uma frase: ");
    fgets(s, sizeof(s), stdin);
    printf("Frase invertida: ");
    for (int i = 0; s[i] != '\0'; i++){
        len++;
    }
    for (int i = len-1; i >= 0; i--){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}