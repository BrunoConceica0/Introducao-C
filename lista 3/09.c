#include <stdio.h>

int main(){

    int n , impares[10], qtd = 0;
    
    for(int i = 0; i<=2; i++){

        printf("Digite o %d numeros: ", i);
        scanf("%d", &n);

        if(n %2 !=0 ){
            impares[qtd] = n;
            qtd++;
        }

    }
    printf("\nNumeros impares digitados: ");
    for(int j = 0; j<qtd ; j++){
        printf("%d ", impares[j]);
    }

}