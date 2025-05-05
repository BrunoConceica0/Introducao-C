#include <stdio.h>

int main(){
    int n  =10, media = 0, soma , i= 1  ;

    while( i <= n){

        i++ ; 
        soma += i ;
        media = soma /n;
    }
    printf("A media e: %d\n", media);
        
        
        
        
}