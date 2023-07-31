#include <stdio.h>
int main (){
	int velocidade;
	int distancia;
	int horas;
	horas = distancia / velocidade;
	printf("defina a distancia:");
	scanf("%d" , &distancia);
	printf("defina a velocidade:");
	scanf("%d" , &velocidade);
	printf("as horas necessarias serao: %d \n" , horas);
	return 0;
}
