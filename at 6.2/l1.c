#include <stdio.h>

int proximo_id(void){
    static int id = 0;
    return ++id;
}

int main(void){
    for (int i = 0; i < 5; i++){
        printf("ID: %d\n", proximo_id());
    }
    return 0;
}