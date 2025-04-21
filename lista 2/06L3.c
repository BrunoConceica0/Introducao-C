#include <stdio.h>

int main(){
    int n1, n2; 

    printf("Digite dois numeros inteiros para saber qual eh o maior: ");
    printf("\nPrimeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O primeiro numero  %d eh maior que o segundo %d, a diferencia entre eles eh : %d", n1,  n2, n1-n2);
    }else if(n2 == n1){
        printf("Os numeros sao iguais %d e %d", n1, n2);       
}else{
        printf("O segundo numero  %d eh maior do que o primeiro %d,  a diferencia entre eles eh : %d", n2,  n1, n2-n1);
    }
}