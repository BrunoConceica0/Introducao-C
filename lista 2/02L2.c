#include <stdio.h>
// calcular o numero recebido e calcular a raiz quadrada se for negativo é invalido

int main(){
    int n1, resultado;
    printf("Digite um numero inteiro para saber a raiz quadrado: ");
    scanf("%d", &n1);
    
    if(n1 >= 0){
        resultado = n1 * n1;
        printf("A raiz quadrada de %.d eh: %.d", n1, resultado);

    }else{
        printf("Numero invalido, digite um numero maior ou igual a 0");
    }
}