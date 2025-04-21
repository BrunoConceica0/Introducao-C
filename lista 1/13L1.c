#include <stdio.h>
// Ler distancia em km e converter para milhas

int main(){
    float km, milha ;

    printf("Digite a distancia em km : ");
    scanf("%f", &km );

    milha = km/ 1.61 ;

    printf("A distancia em milhas eh : %.2f\n", milha);
}