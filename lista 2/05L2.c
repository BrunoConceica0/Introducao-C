#include <stdio.h>
//   par ou impar

int main(){
    int n ;
    printf("Digite um numero inteiro para saber se eh par ou impar: ");
    scanf("%d", &n);
    if(n % 2 == 0 ){
        printf("O numero %d eh par.", n);
    }else{
        printf("O numero %d eh impar.", n);
    }
}