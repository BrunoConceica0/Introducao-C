#include <stdio.h>

int main(){

    int n, soma = 0;

    for(int pares = 0 ; pares <=10 ; pares++){

        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n % 2 ==0){
            soma += n;
            pares++;
        }                
    }
    printf("A soma dos 10 numeros pares eh: %d ", soma);




    int n, soma = 0, pares = 0;

    while (pares < 10) {
        printf("Digite um número: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            soma += n;
            pares++; // Conta apenas pares
        } else {
            printf("Número não é par, tente novamente.\n");
        }
    }

    printf("A soma dos 10 números pares é: %d\n", soma);
    return 0;
}
