#include <stdio.h>

int main(){

    float kmh,ms;

    printf("Digite a metros por segundo: ");
    scanf("%f", &ms);

    kmh = 1.61 * ms  ;
    
    printf("A velocidade em km/h eh: %.2f\n", kmh);

}