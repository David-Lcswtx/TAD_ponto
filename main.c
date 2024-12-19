#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){

	int n, i;	
	int p, q;
	float distancia;

	scanf("%d", &n);

	PPonto* pontos = (PPonto*)malloc(n * sizeof(PPonto));

	if(pontos == NULL){
		return 1;
	}

	for(i = 0; i < n; i++){

		pontos[i] = ponto_criar();
		
		if(pontos[i] == NULL){
			return 1;
		}

		ponto_ler(pontos[i]);
	}

	printf("Pontos lidos:\n");

	for(i = 0; i < n; i++){

		printf("%d: ", i+1);

		ponto_imprimir(pontos[i]);
	}

	printf("\n");

	scanf("%d %d", &p ,&q);

	p -= 1;
	q -= 1;

	printf("Pontos escolhidos:\n");

		printf("Ponto %d: ", p + 1);
		ponto_imprimir(pontos[p]);

		printf("Ponto %d: ", q + 1);
		ponto_imprimir(pontos[q]);

	printf("\n");

	distancia = pontos_distancia(pontos[p], pontos[q]);

	printf("Distância: %.2f\n", distancia);

	for(i = 0; i < n; i++){
		ponto_destruir(pontos[i]);
	}
	free(pontos);

	return 0;

}
