#include <stdio.h>


int main(){

    int num, cont = 0;

    scanf("%d", &num);
    for(int i = num; i < num * num; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
            cont ++;
            if(cont == 6){
                break;
            }
        }
    }



    return 0;
}