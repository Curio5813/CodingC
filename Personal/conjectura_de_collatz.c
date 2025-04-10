#include <stdio.h>


int main(){

    int num, passos = 0, a;

    printf("Digite um número:\n");
    scanf("%d", &num);
    printf("\n");

    a = num;

    while(num != 1){
        if(num % 2 == 1){
            num = 3 * num + 1;
            printf("%d\n", num);
            passos += 1;
        }
        if(num % 2 == 0){
            num = num / 2;
            printf("%d\n", num);
            passos += 1;
        }

    }
    printf("\n");
    printf("Foram necessários %d passos para o número %d entrar em loop infinito!\n", passos, a);

    return 0;

}
