#include <stdio.h>


int main(){

    double num;
    int cont = 0;

    for(int i = 0; i < 6; i++){
        scanf("%lf", &num);
        if(num > 0){
            cont += 1;
        }
    }
    printf("%d valores positivos\n", cont);

    return 0;
}