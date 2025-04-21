#include <stdio.h>
// Calcular angulo em radianos

int main(){
    float graus , radianos;

    printf("Digite a medida em graus para converter para radianos: ");
    scanf("%f", &graus);
    radianos = graus * 3.14 / 180 ;
    printf("A medida em radianos eh : %.2f\n", radianos);
}