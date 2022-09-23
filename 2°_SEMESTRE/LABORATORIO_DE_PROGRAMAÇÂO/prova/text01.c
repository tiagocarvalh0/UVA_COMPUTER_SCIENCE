#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 8

void criarSenha(int vetor[])
{
    int i;
    char vetor1[TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 122;
        if(((vetor[i] > 90) && (vetor[i] < 97)) || ((vetor[i] > 9) && (vetor[i] < 65)))
        {
            while(1)
            {
                vetor[i] = 65 + rand() % 58;
                if(((vetor[i] >= 0) && (vetor[i] <= 9)) || ((vetor[i] >= 65) && (vetor[i] <= 90)) || ((vetor[i] >= 97) && (vetor[i] <= 122)))
                    break;
            }
        }
    }

    printf("SENHA: ");
    for(i = 0; i < TAM; i++)
    {
        if(vetor[i] <= 9)
            printf("%d", vetor[i]);
        else
            printf("%c", vetor[i]);
    }
    printf("\n");
  
}

int main()
{
    int vetor[TAM];

    criarSenha(vetor);

    return 0;
}