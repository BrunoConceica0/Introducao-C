#include <stdio.h>
int main(){

    int n , i = 1 , soma = 0;
    float media = 0;

    while(i <= 10){

        printf("Digite o %d numero: ", i);
        scanf("%d", &n);

        if(n < 0 ||  n ==0){
            printf("Numero invalido, digite novamente\n");
            
        }else
        {  soma += n;
            i++;
            media = soma/10;
            }
      
    }
    if(media == 4){
        printf("O aluno nao pode ser aprovado\n");
    }else if(media <= 5){
        printf("O aluno ficou em recuperacao\n");
    }else{
        printf("O aluno foi aprovado\n");
    }
    printf("A media dos numeros digitados foi: %.2f\n", media);

}