#include <stdio.h>

int main(){
    float n , result ;

    printf("Digite um numero real para saber o valor da raiz quadrada :");
    scanf("%f", &n);

    if(n >= 0){
        result = n ;
        printf("A raiz quadrada do numero eh: %.2f", result);
        
}else{
    printf("O numero eh negativo, portanto nao existe raiz quadrada real.");
}
}