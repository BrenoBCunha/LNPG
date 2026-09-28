#include <stdio.h>

int main(void){
    float c, f;

    printf("Celsius: ");
    scanf("%f", &c);

    f = c*9/5 + 32;

    printf("Fahrenheit: %.2f\n", f);

    return 0;
}