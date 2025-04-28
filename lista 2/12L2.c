#include <stdio.h>

int main(){
    int n1, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    if(n1 < 0){
        printf ("O numero eh negativo");
    }else{

        // Calculo o numero em logaritmo

        while( n1 > 0 ){
            soma += n1 % 10 ; //Pega o ultimo algorismo
            n1 = 10 ; //Remove o ultimo algorismo
    }

    printf("A soma dos algorismos eh: %d\n", soma);
}
}