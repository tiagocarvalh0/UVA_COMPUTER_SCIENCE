#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dijkstra.h"

int map[14][18] = {10, 10, 30, 60, 10, 10, 10, 40, 10, 00, 10, 10, 00, 10, 10, 10, 10, 10,
                   00, 00, 30, 00, 00, 00, 00, 40, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00,
                   10, 10, 30, 10, 10, 10, 10, 40, 10, 00, 10, 10, 00, 20, 20, 20, 20, 20,
                   10, 10, 30, 10, 10, 10, 10, 40, 10, 00, 10, 10, 00, 20, 20, 20, 20, 20,
                   00, 00, 30, 00, 00, 00, 00, 40, 40, 40, 00, 00, 00, 00, 00, 00, 00, 00,
                   20, 20, 30, 10, 10, 00, 10, 10, 00, 10, 10, 10, 10, 10, 10, 00, 10, 10,
                   20, 20, 30, 10, 10, 00, 10, 10, 00, 10, 10, 10, 10, 10, 10, 00, 10, 10,
                   30, 30, 30, 30, 30, 30, 30, 30, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00,
                   10, 10, 40, 10, 10, 00, 10, 10, 00, 20, 20, 20, 20, 00, 10, 00, 10, 10,
                   10, 10, 40, 10, 10, 00, 10, 10, 00, 20, 20, 20, 20, 00, 10, 00, 10, 10,
                   10, 10, 40, 10, 10, 00, 10, 10, 00, 20, 20, 20, 20, 00, 10, 00, 10, 10,
                   00, 00, 40, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00,
                   10, 10, 40, 10, 10, 10, 10, 10, 00, 10, 10, 10, 10, 00, 10, 10, 10, 10,
                   00, 00, 00, 00, 00, 00, 00, 00, 00, 50, 10, 10, 10, 00, 10, 10, 10, 10};

/*Dijkstra algorithm simple implementation*/

Vertex *min_dist(Graph *g, float *dist_values, int states_qtt) {
    Vertex *aux = NULL;
    float   min = INFINITE;
    int     pos = -1;
    
    for(int i = 0; i<states_qtt; i++) {
        aux = Graph_findVertex(g, i);
        
        if(dist_values[i] < min && aux->visited == FALSE) {
            min = dist_values[i];
            pos = i;
        }
    }
    
    return Graph_findVertex(g, pos); // if all vertex->visited are TRUE, so pos = -1 and this function returns NULL
}

void addEdgeToMap(traject_params *t) {
    int k;

    if(t->pos->i1 == t->pos->i2) { //horizontal
        if(t->pos->j1 < t->pos->j2) {
            for(k = t->pos->j1; k <= t->pos->j2; k++)
                map[t->pos->i1][k] += 1;   
        }
        else {
            for(k = t->pos->j1; k >= t->pos->j2; k--)
                map[t->pos->i1][k] += 1;
        }
    }
    else { //vertical
        if(t->pos->i1 < t->pos->i2) {
            for(k = t->pos->i1; k <= t->pos->i2; k++)
                map[k][t->pos->j1] += 1;
        }
        else {
            for(k = t->pos->i1; k >= t->pos->i2; k--)
                map[k][t->pos->j1] += 1;
        }
    } 
}

void addPath(Graph *g, int path[], int destiny) {
    Edge *e = malloc(sizeof(Edge));
    int current = destiny;

    while(1) {
        if(path[current] == -1)
            break;

        e = Graph_findEdge(g, path[current], current);
        addEdgeToMap(e->value);

        current = path[current];
    }
}

float dijkstra(Graph *g, int origin_label, int destiny_label, int states_qtt, float(*edge_value)(Edge *)) {
    
    if(!g) {
        printf("Invalid Graph\n");
        return ERROR;
    }
    
    if(origin_label  >= states_qtt ||
                                     destiny_label >= states_qtt ||
                                     origin_label  < 0           ||
                                     destiny_label < 0) {
        printf("Invalid label\n");
        return ERROR;
    }
    
    Vertex *origin  = Graph_findVertex(g, origin_label);
    Vertex *destiny = Graph_findVertex(g, destiny_label);
    Vertex *aux     = NULL;
    Vertex *actual  = NULL;
    float  *dist    = (float *) malloc(states_qtt * sizeof(float)); 
    int    *path    = (int *) malloc(states_qtt * sizeof(int));
    float   cost    = 0;
    
    dist[origin->label] = 0; // distance between origin and itself is always zero
    aux                 = g->first;
    
    
    while(aux) {
        if(aux != origin)
            dist[aux->label] = INFINITE; // estimated distance between origin and other graph states
        
        path[aux->label] = UNDEFINED;
        aux              = aux->next;
    }
    
    while(actual = min_dist(g, dist, states_qtt)) {
    // find the minor distance at the open states and ignore the states already visited 
    
        Edge *e         = actual->first;
        
        actual->visited = TRUE;
        
        while(e) {
            cost = (float) dist[actual->label] + edge_value(e); // calculate the distance between origin and the state
            
            if(cost < dist[e->head->label]) { // if minor than the actual distance on the array, update it
                dist[e->head->label] = cost;
                path[e->head->label] = actual->label;
            }
            
            e = e->next;
        }
    }
    
    addPath(g, path, destiny_label);
    
    return dist[destiny->label]; // returns the distance between origin and destiny
}

char *findColor(int num, char *color) {
    int x = num / 10; 

    switch(x) {
        case 0:
            strcpy(color, "0;103m"); break;
        case 1:
            strcpy(color, "0;100m"); break;
        case 2:
            strcpy(color, "42m"); break;
        case 3:
            strcpy(color, "0;101m"); break;
        case 4:
            strcpy(color, "43m"); break;
        case 5:
            strcpy(color, "41m"); break;
        case 6:
            strcpy(color, "44m"); break;
    }

    if(num % 10)
        strcat(color, "\e[30m x \e[0m");
    else
        strcat(color, "   ");

    return color;
}

void printMap() {
    char *color = malloc(sizeof(char) * 20);
    int i, j;

    for(i = 0; i < 14; i++) {
        for(j = 0; j < 18; j++) {
            color = findColor(map[i][j], color);
            printf("\e[%s\e[0m", color);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\e[41m   \e[0m Origem \t \e[44m   \e[0m Destino\n\n");
    printf("\e[0;103m   \e[0m 40Km/h \t \e[43m   \e[0m 20Km/h \t \e[0;101m   \e[0m 10Km/h\n\n");
    printf("\e[0;100m   \e[0m Edificação \t \e[42m   \e[0m Arborizado\n\n");
    printf(" X  Caminho mais rápido\n\n");
}