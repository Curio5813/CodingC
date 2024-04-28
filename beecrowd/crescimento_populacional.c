#include <stdio.h>
#include <math.h>


int main(){

	int t, pa, pb, pa_acrescimo, pb_acrescimo, ano = 0;
	double g1, g2;

	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		while(pa <= pb){
			pa_acrescimo = floor(pa * g1/100);
			pb_acrescimo = floor(pb * g2/100);
			ano += 1;
			pa += pa_acrescimo;
			pb += pb_acrescimo;
			if(ano > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(ano <= 100){
			printf("%d anos.\n", ano);
			ano = 0;
		}
		else{
			ano = 0;
		}
	}

	return 0;
}
