#include <stdio.h>


int main(){

    int num, div = 0;

    printf("Todos os números perfeitos até 10 mil:\n");
    for(long long int i = 2; i <= 10000; i++){
        for(long long int j = 1; j < i; j++){
            if(i % j == 0){
                div += j;
            }
            if(div > i){
                break;
            }

        }
        if(div == i){
            printf("%d\n", i);
        }
        div = 0;
    }
    printf("\n");

    return 0;

}
