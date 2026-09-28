#include <stdio.h>

int main(void){
    #define PI 3.14159

    float raio;
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Area: %.2f\n", PI * raio * raio);

    return 0;
}