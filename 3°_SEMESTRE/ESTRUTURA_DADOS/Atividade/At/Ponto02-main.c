#include <stdio.h>
#include <stdlib.h>
#include "Ponto02.h"

    localPonto p1, p2;

int main() {

    informarPontos(&p1, &p2);
    printf("Distancia: %lf\n", distanciaEntrePontos(p1, p2));

    return 0;
}
//  gcc -o pro *.c -lm
