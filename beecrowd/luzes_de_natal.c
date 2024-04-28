#include <stdio.h>



int main() {

	long long int n, num;

	scanf("%lld", &n);
	for(int i = 0; i < n; i++){
		scanf("%lld", &num);
		long long int max_cont = 0;
		long long int cont = 0;
		while(num != 0){
			if(num & 1){ //Se o bit atual é 1, incrementamos a contagem
				cont++;
			}
			else{
				if(cont > max_cont){
					max_cont = cont;
				}
				cont = 0;
			}
			num >>= 1; //Deslocamos o número para a direita para verificar o próximo bit
			if(cont > max_cont){
				max_cont = cont;
			}
		}
		printf("%lld\n", max_cont);
	}

    return 0;
}
