#include <stdio.h>
// leia angulo em graus e converta para radianos

int main(){
    float graus , radianos;

    printf("Digite a medida em graus para converter para graus: ");
    scanf("%f", &radianos);
    graus = (radianos *  180) / 3.14 ;
    printf("A medida em radianos eh : %.2f\n", graus);

//     #include <stdio.h>

// int  main(){

// double n1 , raiz;

// printf("Digite um numero: ");
// scanf("%lf", &n1);

// raiz = n1 /2;

// for(int i = 0 ; i<10 ; i++){
//   raiz = (raiz + n1 / raiz) / 2;
// }
// printf("A raiz quadrada de %.2lf eh aproximadamente %.2lf\n", n1, raiz);
// }
}