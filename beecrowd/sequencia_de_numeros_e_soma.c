#include <stdio.h>


int main(){

	int m, n, soma = 0;

	scanf("%d %d", &m, &n);
	while(m > 0 && n > 0){
		if(m >= n){
			for(int i = n; i <= m; i++){
				soma += i;
			}
			for(int i = n; i <= m; i++){
				printf("%d ", i);
			}
			printf("Sum=%d\n", soma);
		}
		if(n > m){
			for(int i = m; i <= n; i++){
				soma += i;
			}
			for(int i = m; i <= n; i++){
				printf("%d ", i);
			}
			printf("Sum=%d\n", soma);
		}
		soma = 0;
		scanf("%d %d", &m, &n);

	}

	return 0;
}
