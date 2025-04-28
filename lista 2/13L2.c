#include  <stdio.h>
int main(){

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1 * 60) + (nota2 * 60) + (nota3 * 60)) / (nota1 + nota2 + nota3);


    if(media >= 60){
        printf("Aprovado a media ponderada eh: %.2f\n", media);
    }else {
        printf("Reprovado A media ponderada eh: %.2f\n", media);
    }

}