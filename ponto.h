#ifndef __PONTO__H
#define __PONTO__H

typedef struct ponto Pontos, *PPonto;

PPonto ponto_criar();
void   ponto_destruir(PPonto p);
void   ponto_ler(PPonto p);
void   ponto_imprimir(PPonto p);
float  pontos_distancia(PPonto p, PPonto q);

#endif
