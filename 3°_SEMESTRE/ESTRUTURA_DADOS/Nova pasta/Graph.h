#define UNDEFINED -1
#define ERROR -2
#define NO_ERROR 0

typedef struct Graph Graph;
typedef struct Vertex Vertex;
typedef struct Edge Edge;

struct Graph {
  int n;
  Vertex *first;
  Vertex *last;
};

struct Vertex {
  int     n;
  int     label;
  Edge   *first;
  void   *value;
  Vertex *next;
  int     visited;
};

struct Edge {
  int     label;
  Vertex *tail;
  Vertex *head;
  Edge   *next;
  void   *value;
};

Graph  *Graph_alloc();
int     Graph_free(Graph *g);
int     Graph_insertVertex(Graph *g, void *value);
Vertex *Graph_findVertex(Graph *g, int label);
Vertex *Graph_findVertexByValue(Graph *g, void *value, int (*cmp)(void*,void*));
int     Graph_insertEdge(Graph *g, int label0, int label1, void *value);
int     Graph_print(Graph *g);

int     Graph_removeEdge(Graph *g, int label0,int label1);
int     Graph_removeVertex(Graph *g, int label);

Vertex **Graph_dfs(Graph *g, int startLabel);
Vertex **Graph_bfs(Graph *g, int startLabel);

Edge    *Graph_findEdge(Graph *g, int label1, int label2);
