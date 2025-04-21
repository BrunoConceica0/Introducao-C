#include <stdio.h>
// leia angulo em graus e converta para radianos

int main(){
    float graus , radianos;

    printf("Digite a medida em graus para converter para graus: ");
    scanf("%f", &radianos);
    graus = (radianos *  180) / 3.14 ;
    printf("A medida em radianos eh : %.2f\n", graus);
}