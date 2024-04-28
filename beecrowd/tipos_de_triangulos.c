#include <stdio.h>



int main(){

	double lados[3];

	for(int i = 0; i < 3; i++){
		scanf("%lf", &lados[i]);
	}

	for(int step = 0; step < 3 - 1; ++step) {
	    for(int i = 0; i < 3 - step - 1; ++i) {
	    	if(lados[i] > lados[i + 1]) {
	    		double temp = lados[i];
	            lados[i] = lados[i + 1];
	            lados[i + 1] = temp;
	    	}
	    }
	}
	if(lados[2] >= lados[1] + lados[0]){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if(lados[0] == lados[1] && lados[1] == lados[2]){
			printf("TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n");
		}
		if(lados[2] > lados[1] && lados[1] == lados[0]){
			if(lados[2] * lados[2] == lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO RETANGULO\nTRIANGULO ISOSCELES\n");
			}
		}
		if(lados[2] == lados[1] && lados[1] != lados[0]){
			if(lados[2] * lados[2] > lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");
			}
		}
		if(lados[2] == lados[1] && lados[1] != lados[0]){
			if(lados[2] * lados[2] < lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
			}
		}
		if(lados[2] > lados[1] && lados[1] != lados[0]){
			if(lados[2] * lados[2] == lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO RETANGULO\n");
			}
		}
		if(lados[2] > lados[1] && lados[1] == lados[0]){
			if(lados[2] * lados[2] > lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");
			}
		}
		if(lados[2] > lados[1] && lados[1] != lados[0]){
			if(lados[2] * lados[2] > lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO OBTUSANGULO\n");
			}
		}
		if(lados[2] > lados[1] && lados[1] == lados[0]){
			if(lados[2] * lados[2] < lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
			}
		}
		if(lados[2] > lados[1] && lados[1] != lados[0]){
			if(lados[2] * lados[2] < lados[1] * lados[1] + lados[0] * lados[0]){
				printf("TRIANGULO ACUTANGULO\n");
			}
		}
	}

	return 0;
}
