#include <stdio.h>


int main(){

	double vx = 60, vy = 90, distancia, vdiff, minutos;

	scanf("%lf", &distancia);

	vdiff = vy - vx;

	minutos = (distancia / vdiff) * 60;

	printf("%.0lf minutos\n", minutos);


	return 0;
}
