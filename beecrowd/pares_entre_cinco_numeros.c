#include <stdio.h>


int main(){

    int num, cont = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            cont ++;
        }
    }
    printf("%d valores pares\n", cont);

    return 0;
}