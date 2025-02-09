#include <stdio.h>


int main(){

    long long int num, fat = 1;

    printf("Qual número deseja calcular o fatorial?\n");
    scanf("%lld", &num);
    printf("\n");
    for(int i = 1; i <= num; i++){
        fat *= i;
    }
    printf("\n");
    printf("%lld", fat);


    return 0;
}
