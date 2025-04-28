#include <stdio.h>


int main(){

  int n1, n2, media;

  printf("Digite a primeira nota: ");
  scanf("%d", &n1);
  printf("Digite a segunda nota: ");
    scanf("%d", &n2);

    if(n1  & n2  > 10){
      printf("Nota invalida, digite novamente: ");
    }else{
      media =  (n1 +  n2) / 2; 
      printf("A media entre as duas notas eh: %d",  media);
    }
}