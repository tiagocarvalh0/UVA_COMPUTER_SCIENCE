#include <stdio.h>
#include <stdlib.h>
#include "Dijkstra.h"
#define AMARELO 40
#define LARANJA 20
#define VERMELHO 10

typedef struct {
    int minutos;
    int segundos;
} Time;

Time convert_time(float t) {
    Time a;

    a.minutos  = (int) t;
    a.segundos = (int) ((t - a.minutos) * 60);

    return a;
}

float return_edge_value(Edge *e) {
    traject_params *tp = (traject_params *) e->value;
    float time =  tp->distance/(2*tp->street_velo) * 60;// in minutes
    
    return time;
}

traject_params *edge_valors(int distance, int street_velo, int i1, int j1, int i2, int j2) {
    traject_params *new_edge = (traject_params *) malloc(sizeof(traject_params));
    Edge_position *new_pos = malloc(sizeof(Edge_position));

    new_pos->i1 = i1;
    new_pos->i2 = i2;
    new_pos->j1 = j1;
    new_pos->j2 = j2;

    new_edge->distance    = distance;
    new_edge->street_velo = street_velo;
    new_edge->pos = new_pos;
    
    return new_edge;
}



int main() {
    Graph *grp = Graph_alloc();
    float time;
    Time t;

    for(int i=0; i<25; i++)
        Graph_insertVertex(grp, NULL);
        
    Graph_insertEdge(grp,  0,  1, edge_valors(1,  AMARELO, 13, 9, 13, 8));
    Graph_insertEdge(grp,  1,  2, edge_valors(6,  AMARELO, 13, 8, 13, 2));
    Graph_insertEdge(grp,  1,  5, edge_valors(2,  AMARELO, 13, 8, 11, 8));
    Graph_insertEdge(grp,  2,  3, edge_valors(2,  LARANJA, 13, 2, 11, 2));
    Graph_insertEdge(grp,  3,  8, edge_valors(4,  LARANJA, 11, 2, 7, 2));
    Graph_insertEdge(grp,  3,  4, edge_valors(3,  AMARELO, 11, 2, 11, 5));
    Graph_insertEdge(grp,  4,  5, edge_valors(3,  AMARELO, 11, 5, 11, 8));
    Graph_insertEdge(grp,  5, 10, edge_valors(4,  AMARELO, 11, 8, 7, 8));
    Graph_insertEdge(grp,  5,  6, edge_valors(5,  AMARELO, 11, 8, 11, 13));
    Graph_insertEdge(grp,  6,  7, edge_valors(2,  AMARELO, 11, 13, 11, 15));
    Graph_insertEdge(grp,  7, 12, edge_valors(4,  AMARELO, 11, 15, 7, 15));
    Graph_insertEdge(grp,  8, 13, edge_valors(3, VERMELHO, 7, 2, 4, 2));
    Graph_insertEdge(grp,  9,  4, edge_valors(4,  AMARELO, 7, 5, 11, 5));
    Graph_insertEdge(grp, 10,  9, edge_valors(2, VERMELHO, 7, 8, 7, 5));
    Graph_insertEdge(grp, 11, 10, edge_valors(5,  AMARELO, 7, 13, 7, 8));
    Graph_insertEdge(grp, 11,  6, edge_valors(4,  AMARELO, 7, 13, 11, 13));
    Graph_insertEdge(grp, 12, 11, edge_valors(2,  AMARELO, 7, 15, 7, 13));
    Graph_insertEdge(grp, 12, 19, edge_valors(3,  AMARELO, 7, 15, 4, 15));
    Graph_insertEdge(grp, 13, 20, edge_valors(4, VERMELHO, 4, 2, 1, 2));
    Graph_insertEdge(grp, 13, 14, edge_valors(3,  AMARELO, 4, 2, 4, 5));
    Graph_insertEdge(grp, 14,  9, edge_valors(3,  AMARELO, 4, 5, 7, 5));
    Graph_insertEdge(grp, 15, 14, edge_valors(2,  AMARELO, 4, 7, 4, 5));
    Graph_insertEdge(grp, 15, 21, edge_valors(3,  LARANJA, 4, 7, 1, 7));
    Graph_insertEdge(grp, 16, 15, edge_valors(1,  LARANJA, 4, 8, 4, 7));
    Graph_insertEdge(grp, 16, 10, edge_valors(3,  AMARELO, 4, 8, 7, 8));
    Graph_insertEdge(grp, 17, 16, edge_valors(1,  LARANJA, 4, 9, 4, 8));
    Graph_insertEdge(grp, 18, 17, edge_valors(3,  AMARELO, 4, 12, 4, 9));
    Graph_insertEdge(grp, 18, 23, edge_valors(3,  AMARELO, 4, 12, 1, 12));
    Graph_insertEdge(grp, 19, 18, edge_valors(3,  AMARELO, 4, 15, 4, 12));
    Graph_insertEdge(grp, 20, 24, edge_valors(1, VERMELHO, 1, 2, 0, 2));
    Graph_insertEdge(grp, 21, 20, edge_valors(5,  AMARELO, 1, 7, 1, 2));
    Graph_insertEdge(grp, 22, 21, edge_valors(2,  AMARELO, 1, 9, 1, 7));
    Graph_insertEdge(grp, 22, 17, edge_valors(3,  AMARELO, 1, 9, 4, 9));
    Graph_insertEdge(grp, 23, 22, edge_valors(3,  AMARELO, 1, 12, 1, 9));
    

    time = dijkstra(grp, 0, 24, grp->n, return_edge_value);
    t = convert_time(time);
    
    printMap();
    
    printf("Duração da viagem = %d minutos e %d segundos\n", t.minutos, t.segundos);
    
    Graph_free(grp);
}