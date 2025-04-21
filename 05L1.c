// leia um numero real e imprima a quinta parte dele
#include <stdio.h>

int main() {
    float num, resultado;
    printf("Digite um numero real: ");
    scanf("%f", &num);

    resultado = num / 5;

    printf("A quinta parte de %.2f eh %.2f\n", num, resultado);

    return 0;
}
