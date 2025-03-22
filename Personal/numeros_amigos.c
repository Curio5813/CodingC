#include <stdio.h>



int main(){

    int soma1 = 0, soma2 = 0, numero = 2, flag = 0;

    while(numero <= 10000){
        for(int i = 1; i < numero; i++){
            if(numero % i == 0){
                soma1 += i;
            }
        }
        for(int i = 1; i < numero * 2; i++){
            for(int j = 1; j < i; j++){
                if(i % j == 0){
                    soma2 += j;
                }
            }
            if(soma2 == numero && i == soma1 && numero != i){
                printf("Os números %d e %d são números amigos!\n", numero, i);
                flag = 1;

            }
            if(flag == 1){
                flag = 0;
                break;
            }
            else{
                soma2 = 0;
            }
        }
        numero = i;
        soma1 = 0;

    }

    return 0;

}
