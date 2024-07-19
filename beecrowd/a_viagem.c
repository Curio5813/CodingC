#include <stdio.h>
#include <math.h>



int main(){

	int n;

	while(scanf("%d", &n)){
        float soma = 0, media, trocas = 0;
        if(n == 0){
            break;
        }
        else{
            float despesas[n];
            float tam = sizeof(despesas)/sizeof(despesas[0]);
            for(int i = 0; i < n; i++){
                scanf("%f", &despesas[i]);
                soma += despesas[i];
            }
            media = (soma / tam);
            media = round(media);
            for(int i = 0; i < n; i++){
                if(despesas[i] < media){
                    trocas += (media - despesas[i]);
                }
            }
        }
        printf("$%.2f\n", trocas);

    }

	return 0;

}
