#include <stdio.h>

int main(){
    int n1 ,n2 ;
    printf("Digite dois numeros inteiros para saber qual é o maior: ");
    printf("\nPrimeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O maior numero eh: %d", n1);
    }else{
        printf("O maior numero eh: %d", n2);
    }
        
}