#include <stdio.h>


int main(){

	double num;

	scanf("%lf", &num);

	if(0 <= num && num <= 25){
		printf("Intervalo [0,25]\n");
	}
	if(25 < num && num <= 50){
		printf("Intervalo (25,50]\n");
	}
	if(50 < num && num <= 75){
		printf("Intervalo (50,75]\n");
	}
	if(75 < num && num <= 100){
		printf("Intervalo (75,100]\n");
	}
	if(num < 0 || num > 100){
		printf("Fora de intervalo\n");
	}


	return 0;

}
