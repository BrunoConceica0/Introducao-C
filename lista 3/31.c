#include <stdio.h>

int main() {
    float s = 0;
    int numerador = 1;

    for(int denominador = 1; denominador <= 50; denominador++) {
        s += (float)numerador / denominador;
        numerador += 2;
    }

    printf("O valor de S é: %.2f\n", s);
    return 0;
}
