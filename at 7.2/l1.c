#include <stdio.h>
#include <math.h>

struct ponto {
    double x, y;
};

int main(void) {
    struct ponto a, b;

    printf("Digite as coordenadas de A (x y): ");
    if (scanf("%lf %lf", &a.x, &a.y) != 2) {
        return 1;
    }

    printf("Digite as coordenadas de B (x y): ");
    if (scanf("%lf %lf", &b.x, &b.y) != 2) {
        return 1;
    }

    double dx = b.x - a.x;
    double dy = b.y - a.y;

    double distancia = sqrt(dx * dx + dy * dy);

    printf("Distancia = %.2f\n", distancia);

    return 0;
}