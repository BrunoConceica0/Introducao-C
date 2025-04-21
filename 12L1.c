#include <stdio.h>
// Milha  em Km

int main(){
    float km, milha ;

    printf("Digite a distancia em milhas : ");
    scanf("%f", &milha );

    km = 1.61 * milha   ;

    printf("A distancia em km eh : %.2f\n", km);
}