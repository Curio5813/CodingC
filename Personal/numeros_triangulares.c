#include <stdio.h>



int main(){

    long long int termos, num_t = 0;

    printf("Quantos termos queres que tenham o números triangulares?\n");
    scanf("%lld", &termos);
    printf("\n");
    for(int i = 1; i <= termos; i++){
        num_t = (i * (i + 1)) / 2;
        printf("%lld\n", num_t);

    }

    printf("\n");

    return 0;

}
