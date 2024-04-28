#include <stdio.h>
#include <math.h>



int main(){

	int hora, min, seg;
	double m, graus_hora, graus_min, graus_seg;

	while(scanf("%lf", &m) != EOF){

		graus_hora = 360.0 / 24.0;
		graus_min = 360.0 / (24.0 * 60.0);
		graus_seg = 0.00416667;

		if(0.0 <= m && m <= 90.0){
			hora = 6;
			min = 0;
			seg = 0;
			while(m >= graus_hora){
				hora += 1;
				m -= graus_hora;
			}
			while(m >= graus_min){
				min += 1;
				m -= graus_min;
			}
			while(m >= graus_seg){
				seg += 1;
				m -= graus_seg;
			}
			if(hora == 12){
				printf("Boa Tarde!!\n");
				printf("12:00:00\n");
			}
			else{
				printf("Bom Dia!!\n");
				if(hora < 10 && min >= 10 && seg >= 10){
					printf("0%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg >= 10){
					printf("0%d:0%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg < 10){
					printf("0%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg >= 10){
					printf("%d:0%d:%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg < 10){
					printf("%d:%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg < 10){
					printf("%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg >= 10){
					printf("%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min >= 10 && seg < 10){
					printf("0%d:%d:0%d\n", hora, min, seg);
				}
			}
		}
		if(90.0 < m && m <= 180.0){
			hora = 12;
			min = 0;
			seg = 0;
			m -= 90.0;
			while(m >= graus_hora){
				hora += 1;
				m -= graus_hora;
			}
			while(m >= graus_min){
				min += 1;
				m -= graus_min;
			}
			while(m >= graus_seg){
				seg += 1;
				m -= graus_seg;
			}
			if(hora == 18){
				printf("Boa Noite!!\n");
				printf("18:00:00\n");
			}
			else{
				printf("Boa Tarde!!\n");
				if(hora < 10 && min >= 10 && seg >= 10){
					printf("0%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg >= 10){
					printf("0%d:0%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg < 10){
					printf("0%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg >= 10){
					printf("%d:0%d:%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg < 10){
					printf("%d:%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg < 10){
					printf("%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg >= 10){
					printf("%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min >= 10 && seg < 10){
					printf("0%d:%d:0%d\n", hora, min, seg);
				}
			}
		}
		if(180.0 < m && m <= 270.0){
			hora = 18;
			min = 0;
			seg = 0;
			m -= 180.0;
			while(m >= graus_hora){
				hora += 1;
				m -= graus_hora;
			}
			while(m >= graus_min){
				min += 1;
				m -= graus_min;
			}
			while(m >= graus_seg){
				seg += 1;
				m -= graus_seg;
			}
			if(hora == 24){
				printf("De Madrugada!!\n");
				printf("00:00:00\n");
			}
			else{
				printf("Boa Noite!!\n");
				if(hora < 10 && min >= 10 && seg >= 10){
					printf("0%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg >= 10){
					printf("0%d:0%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg < 10){
					printf("0%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg >= 10){
					printf("%d:0%d:%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg < 10){
					printf("%d:%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg < 10){
					printf("%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg >= 10){
					printf("%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min >= 10 && seg < 10){
					printf("0%d:%d:0%d\n", hora, min, seg);
				}
			}
		}
		if(270.0 < m && m <= 360.0){
			hora = 0;
			min = 0;
			seg = 0;
			m -= 270.0;
			while(m >= graus_hora){
				hora += 1;
				m -= graus_hora;
			}
			while(m >= graus_min){
				min += 1;
				m -= graus_min;
			}
			while(m >= graus_seg){
				seg += 1;
				m -= graus_seg;
			}
			if(hora == 6){
				printf("Bom Dia!!\n");
				printf("06:00:00\n");
			}
			else{
				printf("De Madrugada!!\n");
				if(hora < 10 && min >= 10 && seg >= 10){
					printf("0%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg >= 10){
					printf("0%d:0%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min < 10 && seg < 10){
					printf("0%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg >= 10){
					printf("%d:0%d:%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg < 10){
					printf("%d:%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min < 10 && seg < 10){
					printf("%d:0%d:0%d\n", hora, min, seg);
				}
				if(hora >= 10 && min >= 10 && seg >= 10){
					printf("%d:%d:%d\n", hora, min, seg);
				}
				if(hora < 10 && min >= 10 && seg < 10){
					printf("0%d:%d:0%d\n", hora, min, seg);
				}
			}
		}
	}

	return 0;
}
