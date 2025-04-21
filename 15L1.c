#include <stdio.h>
// Ler angulo em radianos e converter para graus

int main(){
    float graus , radianos;

    printf("Digite a medida em radianos para converter para graus: ");
    scanf("%f", &radianos);
    graus = radianos * 180 / 3.14 ;
    printf("A medida em graus eh : %.2f\n", graus);

}