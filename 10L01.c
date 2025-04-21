#include <stdio.h>

// Leia a velocidade em km/h e converta para m/s

int main() {
    float kmh, ms ;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh/3.6 ; 

    printf("A velocidade em m/s eh: %.2f\n", ms);

}