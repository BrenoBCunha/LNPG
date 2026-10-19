#include "mathlib.h"

int maior(int a, int b) {
    return (a > b) ? a : b;
}

long fatorial(int n) {
    if (n <= 1)
        return 1;

    return n * fatorial(n - 1);
}