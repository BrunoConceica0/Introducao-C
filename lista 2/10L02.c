#include <stdio.h>

int main(){
    float resultado, altura ;
    char sexo ;

    printf("Digite o sexo (M para masculino e F para feminino): ");
    scanf(" %c", &sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || sexo == 'm'){
        resultado = (72.7 * altura) - 58;
    }else if(sexo == 'F' || sexo == 'f'){
        resultado = (62.1 * altura) - 44.7;
}else{
        printf("Sexo invalido\n");
    }
    
    printf("O peso ideal eh: %.2f\n", resultado);

}