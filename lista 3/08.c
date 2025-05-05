

#include <stdio.h>

int main(){
    int menor , n, i=1;

    while(i <= 10){

        printf("Digite o %d numero: ", i);
        scanf("%d", &n);

        if(i == 1 || n < menor ){

            menor = n;
        }
        i++;
    }
    printf("O menor numero digitado foi: %d\n", menor);
}