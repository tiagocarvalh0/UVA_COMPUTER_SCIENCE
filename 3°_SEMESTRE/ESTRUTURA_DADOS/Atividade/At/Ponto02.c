#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto02.h"

double distanciaEntrePontos(localPonto p1, localPonto p2) {
    double Distancia;

    Distancia = sqrt(pow(p2.PontoX - p1.PontoX, 2) + pow(p2.PontoY - p1.PontoY, 2));

    return Distancia;
}

void informarPontos(localPonto *p1, localPonto *p2) {
    system("clear");
    printf("Ponto P1\n");
    printf("X: ");
    scanf("%lf", &p1->PontoX);
    printf("Y: ");
    scanf("%lf", &p1->PontoY);
    printf("Ponto P2\n");
    printf("X: ");
    scanf("%lf", &p2->PontoX);
    printf("Y: ");
    scanf("%lf", &p2->PontoY);
}