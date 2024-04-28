#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int* level(int tam){

	int nivel;

	int *vetor1 = (int*)malloc(tam * sizeof(int));

	printf("Escolha um nível de dificuldade [1, 2, 3, ou 4]: ", nivel);
	scanf("%d", &nivel);


	if(nivel == 1){

		srand(time(NULL));

		for(int i = 0; i < 2; i++){
			int numero = rand() % 10 + 1;
			vetor1[i] = numero;
		}
		return vetor1;

	}
	else if(nivel == 2){

		srand(time(NULL));

		for(int i = 0; i < 2; i++){
			int numero = rand() % 100 + 1;
			vetor1[i] = numero;
		}
		return vetor1;
	}
	else if(nivel == 3){

		srand(time(NULL));

		for(int i = 0; i < 2; i++){
			int numero = rand() % 1000 + 1;
			vetor1[i] = numero;
		}
		return vetor1;
	}
	else if(nivel == 4){

		srand(time(NULL));

		for(int i = 0; i < 2; i++){
			int numero = rand() % 10000 + 1;
			vetor1[i] = numero;
		}
		return vetor1;
	}

}

int operacao(){

	int opera;

	srand(time(NULL));

	int numero = rand() % 3 + 1;

	return numero;

}


int main(){

	int tam = 2, resp, soma = 0, sub = 0, mult = 1, contn;

	static int score = 0;

	int *vetor = level(tam);

	operacao();


	if(operacao() == 1){
		printf("Informe o resultado da seguinte operação:\n");
		printf("%d + %d\n", vetor[0], vetor[1]);
		soma = vetor[0] + vetor[1];
		scanf("%d", &resp);
		if(resp == soma){
			score += 1;
			printf("Resposta correta!\n");
			printf("%d + %d = %d\n", vetor[0], vetor[1], soma);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();
			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}else{
			printf("Resposta errada!\n");
			printf("%d + %d = %d\n", vetor[0], vetor[1], soma);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();
			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}

	}
	if(operacao() == 2){
		printf("Informe o resultado da seguinte operação:\n");
		printf("%d - %d\n", vetor[0], vetor[1]);
		sub = vetor[0] - vetor[1];
		scanf("%d", &resp);
		if(resp == sub){
			score += 1;
			printf("Resposta correta!\n");
			printf("%d - %d = %d\n", vetor[0], vetor[1], sub);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();
			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}else{
			printf("Resposta errada!\n");
			printf("%d - %d = %d\n", vetor[0], vetor[1], sub);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();

			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}
	}
	if(operacao() == 3){
		printf("Informe o resultado da seguinte operação:\n");
		printf("%d x %d\n", vetor[0], vetor[1]);
		mult = vetor[0] * vetor[1];
		scanf("%d", &resp);
		if(resp == mult){
			score += 1;
			printf("Resposta correta!\n");
			printf("%d x %d = %d\n", vetor[0], vetor[1], mult);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();
			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}else{
			printf("Resposta errada!\n");
			printf("%d x %d = %d\n", vetor[0], vetor[1], mult);
			printf("Você tem %d ponto(s).\n", score);
			printf("Deseja continuar jogando? [1 - sim, 0 - não]\n");
			scanf("%d", &contn);
			if(contn == 1){
				free(vetor);
				vetor = NULL;
				return main();
			}
			if(contn == 0){
				printf("Você finalizou com %d ponto(s).\n", score);
				printf("Até a próxima!\n");
				free(vetor);
				vetor = NULL;
				return 0;
			}
		}
	}

	free(vetor);
	vetor = NULL;
    return 0;
}

