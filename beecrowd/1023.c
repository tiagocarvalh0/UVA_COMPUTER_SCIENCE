#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int vetor[], int vetorSecundario[], int tamanho);

int main() {

  int scanner = -1;
  double mediaM3 = 0;
  int quantPessoas = 0;

  scanf("%d", &scanner);
  int vetor1[scanner];
  int vetor2[scanner];
  for(int i = 0; i < scanner; i++) {
    scanf("%d %d", &vetor1[i], &vetor2[i]);
    mediaM3+= vetor2[i];
    quantPessoas+= vetor1[i];
    vetor2[i] = vetor2[i] / vetor1[i];
  }

  BubbleSort(vetor2, vetor1, scanner);
  for(int i = 0; i < scanner; i++) {
    printf("%d-%d, ", vetor1[i], vetor2[i]);
  }
  printf("Consumo medio: %.02f", mediaM3/quantPessoas);

    return 0;
}
/*
Cidade# 1:
2-5 3-7 3-13
Consumo medio: 9.00 m3.*/

void BubbleSort(int vetor[], int vetorSecundario[], int tamanho) {
    int aux, aux2, i, j;

    for(j = tamanho - 1; j >= 1; j--) {
        for(i = 0; i < j; i++) {
            if(vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                aux2 = vetorSecundario[i];

                vetor[i] = vetor[i + 1];
                vetorSecundario[i] = vetorSecundario[i+1];

                vetor[i + 1] = aux;
                vetorSecundario[i+1] = aux2;
            }
        }
    }
}
