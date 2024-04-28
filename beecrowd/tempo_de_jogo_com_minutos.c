#include <stdio.h>



int main(){

	int h1, min1, h2, min2, horas, minutos;

	scanf("%d %d %d %d", &h1, &min1, &h2, &min2);
	if(h1 < h2 && min1 == min2){
		horas = h2 - h1;
		minutos = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 < h2 && min1 < min2){
		horas = h2 - h1;
		minutos = min2 - min1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 < h2 && min1 > min2){
		horas = h2 - h1 - 1;
		minutos = 60 - (min1 - min2);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 == h2 && min1 == min2){
		horas = 24;
		minutos = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 == h2 && min1 < min2){
		horas = 0;
		minutos = min2 - min1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 == h2 && min1 > min2){
		horas = 24 - 1;
		minutos = 60 - (min1 - min2);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 > h2 && min1 == min2){
		horas = 24 - (h1 - h2);
		minutos = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 > h2 && min1 < min2){
		horas = 24 - (h1 - h2);
		minutos = min2 - min1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
	if(h1 > h2 && min1 > min2){
		horas = 24 - (h1 - h2) - 1;
		minutos = 60 - (min1 - min2);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}

	return 0;
}
