#include <stdio.h>

int main(){
    float n, result ;
    printf("Digite um numero real para saber o valor quadrado :");
    scanf("%f", &n);

    if(n >= 0){
        result = n * n;
        printf("O quadrado do numero eh: %.2f", result);
    }else{
        result = n * n * (-1);
         ;
        printf("O quadrado do numero eh: %.2f", result);
    }

}
// Raiz quadrada