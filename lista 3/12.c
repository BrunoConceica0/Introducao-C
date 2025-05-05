#include <stdio.h>

int main(){

    int n ;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Numero invalido\n");

    }else{

        for(int i = n; i >=0 ; i--){
            printf("%d ", i);
        }
    }

   
}