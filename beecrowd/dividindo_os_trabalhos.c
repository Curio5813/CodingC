#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int n, rangel = 0, *trabalhos, soma = 0, media, gugu, diff;
	while(scanf("%d", &n) != EOF){

		trabalhos = (int*)malloc(n * sizeof(int));

		for(int i = 0; i < n; i++){
			scanf("%d", &trabalhos[i]);
			soma += trabalhos[i];
		}
		media = floor(soma / 2);
		for(int i = 0; i < n; i++){
			if(rangel < media){
				rangel += trabalhos[i];
			}
			if(rangel >= media){
				gugu += trabalhos[i];
			}
		}
		printf("%d %d\n", rangel, gugu)
		diff = abs(rangel - gugu);
		printf("%d\n", diff);
	}

	return 0;
}
