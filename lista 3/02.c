#include <stdio.h>

int main() {

    int n = 100 ,  i =1 ;

    // do{
    //  printf("%d\n", i);
    //  i+=3;

    // }
    // while(i < n);

    for(i; i< n ; i+=3){
        printf("%d\n", i);
    }
    return 0;
        
}