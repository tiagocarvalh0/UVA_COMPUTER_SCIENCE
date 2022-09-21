#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main()
{
    srand(time(NULL));

    int i, numSorteado, numEscolhido;

    numSorteado = (rand() % 100) + 1;
    printf("%d\n", numSorteado);

    for(i = 0; i < TAM; i++)
    {
        scanf("%d", &numEscolhido);

        if(numSorteado == numEscolhido)
        {
            printf("ACERTOU!!!!!\n");
                break;
        }

        else if(numSorteado < numEscolhido)
            printf("%d eh MAIOR\n", numEscolhido);
        else if(numSorteado > numEscolhido)
            printf("%d eh MENOR\n", numEscolhido);
    }
    return 0;
}