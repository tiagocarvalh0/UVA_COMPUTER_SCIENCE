#include "Graph.h"

#define INFINITE 1000
#define TRUE 1
#define FALSE 0

typedef struct {
    int i1; 
    int i2;
    int j1;
    int j2;
} Edge_position;

typedef struct {
    float distance;
    float street_velo;
    Edge_position *pos;
} traject_params;

Vertex *min_dist(Graph *g, float *dist_values, int states_qtt);
void    addEdgeToMap(traject_params *t);
void    addPath(Graph *g, int path[], int destiny);
float   dijkstra(Graph *g, int origin_label, int destiny_label, int states_qtt, float(*edge_value)(Edge *));
char   *findColor(int num, char *color);
void    printMap();