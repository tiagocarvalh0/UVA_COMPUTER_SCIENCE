#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Graph.h"
#include "Queue.h"

Graph *Graph_alloc() {
  Graph *g = malloc(sizeof(Graph));
  if (g) {
    g->n = 0;
    g->first = NULL;
    g->last = NULL;
  }
  return g;
}

int Graph_free(Graph *g) {
  Vertex *v, *vAux;
  Edge   *e, *eAux;
  
  if (g == NULL) 
    return ERROR;
  
  v = g->first;
  
  while (v) {
    e = v->first;
    
    while (e) {
      eAux = e->next;
      free(e);
      e = eAux;
    }
    
    vAux = v->next;
    free(v);
    v = vAux;
  }
  
  free(g);
  
  return NO_ERROR;
}

int Graph_insertVertex(Graph *g, void *value) {
  Vertex *vNew;
  
  assert(g != NULL);
  
  vNew = malloc(sizeof(Vertex));
  
  assert(vNew != NULL);
  
  vNew->n       = 0;
  vNew->visited = 0;
  vNew->first   = NULL;
  vNew->next    = NULL;
  vNew->value   = value;
  vNew->label   = g->n++;
  
  if (g->last == NULL)
    g->first = vNew;
  else 
    g->last->next = vNew;
  
  g->last = vNew;
  
  return NO_ERROR;
}

Vertex *Graph_findVertex(Graph *g, int label) {
  Vertex *v = NULL;
  
  assert(g != NULL);
  
  v = g->first;
  
  while(v) {
    if (v->label == label)
      return v;
  
    v = v->next;
  }
 
  return NULL;
}

int Graph_print(Graph *g) {
  Vertex *v;
  Edge   *e;
  
  assert(g != NULL);
  
  printf("Graph(%d)\n", g->n);
  
  v = g->first;
  
  while (v) {
    printf(" [%d]:", v->label);
    
    e = v->first;
    while (e) {
      printf("(%d)", e->head->label);
      e = e->next;
    }
    printf("\n");
    
    v = v->next;
  }
  
  return NO_ERROR;
}

int Graph_insertEdge(Graph *g, int label0, int label1, void *value) {
  Vertex *v0 = NULL, *v1 = NULL;
  Edge *eNew = NULL;
  
  assert(g != NULL);
  
  v0 = Graph_findVertex(g, label0);
  v1 = Graph_findVertex(g, label1);
  
  assert(v0 != NULL && v1 != NULL);
  
  eNew = malloc(sizeof(Edge));
  
  assert(eNew != NULL);
  
  eNew->label = v0->n++;
  eNew->tail  = v0;
  eNew->head  = v1;
  eNew->value = value;
  eNew->next  = NULL;
  
  if (v0->first != NULL)
    eNew->next = v0->first;
  
  v0->first = eNew;
  
  return NO_ERROR;
}

Vertex *Graph_findVertexByValue(Graph *g, void *value, int (*cmp)(void*,void*)) {
  Vertex *v = NULL;
  
  assert(g != NULL && value != NULL && cmp != NULL);
  
  v = g->first;
  
  while(v) {
    if (cmp(v->value, value) == 0)
      return v;
  
    v = v->next;
  }
 
  return NULL;
}

int Graph_removeEdge(Graph *g, int label0,int label1) {
  Vertex *v0 = NULL, *v1 = NULL;
  Edge *e = NULL, *prev = NULL;
  
  assert(g != NULL);
  
  v0 = Graph_findVertex(g, label0);
  v1 = Graph_findVertex(g, label1);
  
  if (v0 != NULL && v1 != NULL) {
    e = v0->first;
    while (e) {
      if (e->head->label == label1) {
        
        if (prev == NULL)
          v0->first = e->next;
        else 
          prev->next = e->next;
        
        free(e);
        v0->n--;
        break;
      }
        
      prev = e;
      e = e->next;
    }
    
    return NO_ERROR;
  }
  
  return ERROR;
}

int Graph_removeVertex(Graph *g, int label) {
  Vertex *v = NULL, *prev = NULL;
  Edge *e = NULL, *eAux = NULL;
  
  assert(g != NULL);
  
  v = g->first;
  
  while (v) {
    if (v->label == label) {
      
      e = v->first;
      while (e) {
        eAux = e->next;
        free(e); 
        e = eAux;
      }
      
      for(int i=0; i<g->n; i++)
        Graph_removeEdge(g, i, label);
      
      if (prev == NULL) {
        g->first = v->next;
      }
      else {
        prev->next = v->next;
      }
    
      free(v);
      g->n--;
    }
    
    prev = v;
    v = v->next;
  }
  
  return ERROR;
}

static Vertex *notVisited(Edge *edge) {
  
  while (edge) {
    if (edge->head->visited == 0)
      return edge->head;
      
    edge = edge->next;
  }
  
  return NULL;
}

static void dfs(Vertex *v, Vertex **path, int *count) {
  Vertex *k = NULL;
  
  assert(v != NULL && path != NULL);
  
  v->visited = 1;
  path[*count] = v;
  
  while (k = notVisited(v->first)) {
    *count += 1;
    dfs(k, path, count);
  }
}

Vertex **Graph_dfs(Graph *g, int startLabel) {
  Vertex **path = NULL, *v = NULL;
  int count = 0;
  
  assert(g != NULL);
  
  v = Graph_findVertex(g, startLabel);
  
  if (v) {
    path = calloc(g->n, sizeof(Vertex*));
    
    dfs(v, path, &count);
  }
  
  return path;
}

Vertex **Graph_bfs(Graph *g, int startLabel) {
  Vertex **path = NULL, *v = NULL, *k = NULL;
  Queue *q = NULL;
  int count = 0;
  
  assert(g != NULL);
  
  v = Graph_findVertex(g, startLabel);
  
  if(v) {
    path = calloc(g->n, sizeof(Vertex*));
    q = Queue_alloc(g->n);
    
    v->visited = 1;
    path[count++] = v;
    
    Queue_push(q, v);
    
    while (!Queue_isEmpty(q)) {
      v = Queue_pop(q);
      
      while (k = notVisited(v->first)) {
        k->visited = 1;
        path[count++] = k;
        Queue_push(q, k);
      }
    }
  }
  
  return path;  
}

Edge *Graph_findEdge(Graph *g, int label1, int label2) {
  Vertex *v;
  Edge *e;
  
  assert(g != NULL);

  v = Graph_findVertex(g, label1);

  assert(v != NULL);

  e = v->first;

  while(e) {
    if(e->head->label == label2)
      break;

    e = e->next;
  }

  return e;
}