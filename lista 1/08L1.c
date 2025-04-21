#include <stdio.h>
// Converter Celsius para Kelvin
int main() {

    float celsius , kelvin ;

    printf("Digite a temperatura em kelvin : ");
    scanf("%f", &kelvin);

    celsius  =  kelvin - 273.15;

    printf("A temperatura em Celsius eh : %.2f\n", celsius);

}