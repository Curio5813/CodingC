#include <stdio.h>


int main(){

	long int n, c = 0, l = 0, xx = 0, x = 0, v = 0, ii = 0, i = 0;

	scanf("%ld", &n);

	printf("%ld\n", n);

	while(n >= 100){
		c += 1;
		n -= 100;
	}
	while(n >= 50){
		l += 1;
		n -= 50;
	}
	while(n >= 20){
		xx += 1;
		n -= 20;
	}
	while(n >= 10){
		x += 1;
		n -= 10;
	}
	while(n >= 5){
		v += 1;
		n -= 5;
	}
	while(n >= 2){
		ii += 1;
		n -= 2;
	}
	while(n >= 1){
		i += 1;
		n -= 1;
	}
	printf("%d nota(s) de R$ 100,00\n", c);
	printf("%d nota(s) de R$ 50,00\n", l);
	printf("%d nota(s) de R$ 20,00\n", xx);
	printf("%d nota(s) de R$ 10,00\n", x);
	printf("%d nota(s) de R$ 5,00\n", v);
	printf("%d nota(s) de R$ 2,00\n", ii);
	printf("%d nota(s) de R$ 1,00\n", i);


	return 0;
}
