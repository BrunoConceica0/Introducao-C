#include <stdio.h>

int main(){
    int n = 10000000 ;

// for ( int i = 0 ; i <= n ; i+=1000 ){
//  printf("%d\n ", i) ;  
// }

do{
    printf("%d\n ", n) ;
    n +=100000;
}
    while(n < 10000000);

}