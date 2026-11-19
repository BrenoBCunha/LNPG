#include <stdio.h>

union bytes {
    int i;
    unsigned char b[4];
};

int main(void){
    union bytes u;
    u.i = 0x01020304;

    for (int i=0; i<4; i++){
        printf("%02X", u.b[i]);
    }

    printf("\n");

    return 0;
}

/*
Pergunta: o primeiro byte impresso é 0x01 ou 0x04 ? O que isso diz sobre como o seu computador
guarda um int (little-endian)? Pratica: a union como forma de reinterpretar os mesmos bytes sob outro
tipo.

O primeiro byte impresso é 0x04. Isso sigifica que o meu computador é little-endian
*/