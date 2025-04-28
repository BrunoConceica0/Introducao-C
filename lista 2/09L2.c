#include <stdio.h>

int main(){
  float salario , prestacao ;

  printf("Digite seu salario: ");
  scanf("%f", &salario);
  printf("Digite o seu prestacao: ");
  scanf("%f", &prestacao);

  if(prestacao <= (salario *0.2)){

  printf("Emprestimo concedido\n");
  }else{
  printf("Emprestimo negado\n");

  }
}