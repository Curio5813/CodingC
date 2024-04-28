#include <stdio.h>
#include <stdlib.h>


int main(){

	int n, *v;
	double favor, votacao;

	while((scanf("%d", &n) != EOF)){

		favor = 0;

		double quorum = 2.0/3.0;

		v = (int*) malloc(n * sizeof(int));

		for(int i = 0; i < n; i++){
			scanf("%d", &v[i]);
		}
		for(int i = 0; i < n; i++){
			if(v[i] == 1){
				favor += 1;
			}
		}
		votacao = favor / n;

		if(votacao >= quorum){
			printf("impeachment\n");
		}
		if(votacao < quorum){
			printf("acusacao arquivada\n");
		}
		free(v);
		v = NULL;
	}

	return 0;
}
