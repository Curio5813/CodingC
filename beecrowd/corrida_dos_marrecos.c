#include <stdio.h>
#include <math.h>


int main(){

    long int n;

    while(scanf("%ld", &n) != EOF){
        long int corridas = 0, aprox;
        if(n == 0){
            break;
        }
        if(n == 1){
            printf("%d\n", 0);
        }
        else{
            while(n > 1){
                aprox = ceil((double) n / 3.0);
                corridas += aprox;
                n = aprox;
            }
            printf("%ld\n", corridas);
        }
    }

    return 0;
}
