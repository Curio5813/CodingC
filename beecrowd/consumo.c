#include <stdio.h>


int main(){

	int x;
	double y, consumo;

	scanf("%d", &x);
	scanf("%lf", &y);

	consumo = x / y;

	printf("%.3lf km/l\n", consumo);


	return 0;

}
