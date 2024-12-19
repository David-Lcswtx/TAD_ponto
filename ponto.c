#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct ponto Pontos, *PPonto;

struct ponto{

    float x;
    float y;
  
};

PPonto ponto_criar(){

    PPonto p = (PPonto)malloc(sizeof(Pontos));
    
    if(p == NULL){

        return NULL;

    }
    else{

    p->x = 0.0;
    p->y = 0.0;

    }

    return p;
}

float pontos_distancia(PPonto p, PPonto q){

    float distancia_x;
    float distancia_y;

    distancia_x = q->x - p->x;
    distancia_y = q->y - p->y;

    return sqrt((distancia_x * distancia_x) + (distancia_y * distancia_y));

}

void ponto_ler(PPonto p){

    scanf("%f %f", &p->x, &p->y);

}

void ponto_imprimir(PPonto p){

    printf("(%.1f, %.1f)\n", p->x, p->y);

}

void ponto_destruir(PPonto p){

    free(p);

}

