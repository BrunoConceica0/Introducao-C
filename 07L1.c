#include <stdio.h>
// Converter Fahrenheit para Celsius

int main(){

    float fahrenheit, celsius ;

    printf("Digite a temperatura em Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = 5 *(fahrenheit - 32) / 9;

    printf("A temperatura em Celsius eh : %.2f\n", celsius);
}