#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){

	int n, cont, vdd, digitos;
	char placas[101];

	scanf("%d", &n);

	for(int j = 0; j < n; j++){

		cont = 0;
		vdd = 0;
		digitos = 0;

		scanf("%s", &placas);

		int len = strlen(placas);
		char placa[len + 1];

		for(int i = 0; i < len; i++){
			placa[i] = placas[i];
		}
		//Para determinar que é um vetor de caracteres.
		placa[len] = '\0';

		size_t tam = sizeof(placa) / sizeof(placa[0]);

		if(tam < 9 || tam > 9){
			printf("FAILURE\n");
		}
		if(tam == 9){
			for(int k = 0; k < 9; k++){
				if(k <= 2){
					if(placa[k] == 'A'){
						cont += 1;
					}
					if(placa[k] == 'B'){
						cont += 1;
					}
					if(placa[k] == 'C'){
						cont += 1;
					}
					if(placa[k] == 'D'){
						cont += 1;
					}
					if(placa[k] == 'E'){
					}
					if(placa[k] == 'F'){
						cont += 1;
					}
					if(placa[k] == 'G'){
						cont += 1;
					}
					if(placa[k] == 'H'){
						cont += 1;
					}
					if(placa[k] == 'I'){
						cont += 1;
					}
					if(placa[k] == 'J'){
						cont += 1;;
					}
					if(placa[k] == 'K'){
						cont += 1;
					}
					if(placa[k] == 'L'){
						cont += 1;;
					}
					if(placa[k] == 'M'){
						cont += 1;
					}
					if(placa[k] == 'N'){
						cont += 1;
					}
					if(placa[k] == 'O'){
						cont += 1;
					}
					if(placa[k] == 'P'){
						cont += 1;
					}
					if(placa[k] == 'Q'){
						cont += 1;
					}
					if(placa[k] == 'R'){
						cont += 1;
					}
					if(placa[k] == 'S'){
						cont += 1;
					}
					if(placa[k] == 'T'){
						cont += 1;
					}
					if(placa[k] == 'U'){
						cont += 1;
					}
					if(placa[k] == 'V'){
						cont += 1;
					}
					if(placa[k] == 'W'){
						cont += 1;
					}
					if(placa[k] == 'X'){
						cont += 1;
					}
					if(placa[k] == 'Y'){
						cont += 1;
					}
					if(placa[k] == 'Z'){
						cont += 1;
					}
				}
			}
			if(cont == 3 && placa[3] == '-'){
				vdd = 1;
			}
			else{
				printf("FAILURE\n");
			}
			if(vdd == 1){
				for(int k = 4; k < 9; k++){
					if(placa[k] == '1'){
						digitos += 1;
					}
					if(placa[k] == '2'){
						digitos += 1;
					}
					if(placa[k] == '3'){
						digitos += 1;
					}
					if(placa[k] == '4'){
						digitos += 1;
					}
					if(placa[k] == '5'){
						digitos += 1;
					}
					if(placa[k] == '6'){
						digitos += 1;
					}
					if(placa[k] == '7'){
						digitos += 1;
					}
					if(placa[k] == '8'){
						digitos += 1;
					}
					if(placa[k] == '9'){
						digitos += 1;
					}
					if(placa[k] == '0'){
						digitos += 1;
					}
				}
				if(digitos == 4){
					if(placa[7] == '1' || placa[7] == '2'){
						printf("MONDAY\n");
					}
					if(placa[7] == '3' || placa[7] == '4'){
						printf("TUESDAY\n");
					}
					if(placa[7] == '5' || placa[7] == '6'){
						printf("WEDNESDAY\n");
					}
					if(placa[7] == '7' || placa[7] == '8'){
						printf("THURSDAY\n");
					}
					if(placa[7] == '9' || placa[7] == '0'){
						printf("FRIDAY\n");
					}
				}
				if(digitos != 4){
					printf("FAILURE\n");
				}
			}
		}
	}
	return 0;
}
