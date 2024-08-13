#include <stdio.h>


int main(){

    long int n;

    while(scanf("%ld", &n) != EOF){
        long int cont = 1, corridas = 1;
        if(n == 0){
            break;
        }
        if(n == 1){
            printf("%d\n", 0);
        }
        else{
            for(long int i = 2; i <= n; i++){
                if(cont % 3 == 0){
                    corridas += 2;
                }
                cont += 1;
            }
            printf("%ld\n", corridas);
        }
    }

    return 0;
}
