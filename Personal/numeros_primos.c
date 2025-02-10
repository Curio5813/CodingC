#include <stdio.h>


int main(){

    int num;

    printf("Digite um número menor ou igual à mil para calcular todos os numeros primos até esse número: ");
    scanf("%lld", &num);
    printf("\n");
    for(int i = 2; i <= num; i++){
        for(int j = 2; j <= num; j++){
            if(i % j == 0 && i == j){
                printf("%lld\n", i);
                break;
            }
            if(i % j == 0 && i != j){
                break;
            }
        }
    }
    printf("\n");

    return 0;

}
