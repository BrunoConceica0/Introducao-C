#include <stdio.h>

int main (){
    float nota1, nota2, nota3, media = 0;

    printf("Digite a nota do Trabalho de laboratorio : ");
    scanf("%f", &nota1);
    printf("Digite a nota avaliacao semestral : ");
    scanf("%f", &nota2);
    printf("Digite a nota do exame final : ");
    scanf("%f", &nota3);

    nota1  =  nota1 / 2;
    nota2 = nota2 / 3;
    nota3 = nota3 / 5;

    // if(nota1 > 2 || nota2 > 3 || nota3 > 5){
    //     printf("Valor invalido\n");
    // }else{

        // calculo a media

        media = nota1 + nota2 + nota3;

        if(media <= 2){
            printf("Aluno reprovado %.0f\n", media);
        }else if( media >= 3 || media < 5 ){
            printf("Aluno em recuperaca %.0f ", media);
            
        }else{
            printf("Aluno aprovado %.0f\n", media);
        }
    }
// }