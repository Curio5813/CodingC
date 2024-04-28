#include <stdio.h>


int main(){

	int numeros[3], maior = 0;

	scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

	for(int i = 0; i <= 2; i++){
		if(numeros[i] > maior){
			maior = numeros[i];
		}
	}

	printf("%d eh o maior", maior);
	printf("\n");


	return 0;
}
