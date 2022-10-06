#include <stdio.h>

int tempoEntrega(int vetor1[], int vetor2[], int a, int b)
{
    int i , j, cont = 0, posicao = 0;

    for(i = 0; i < b; i++)
    {
        printf("");
        for(j = 0; j < a; j++)
        {
            if(vetor2[i] > vetor1[j])
                cont++;
            else if(vetor2[i] == vetor1[i])
                break;
            else if(vetor2[i] < vetor1[i])
            {
                printf("MENOR\n");
            }
        }
    }


}
int main()
{
    int a, b, i;

    scanf("%d %d", &a, &b);

    int vetor1[a], vetor2[b];

    for(i = 0; i < a; i++)
        scanf("%d", &vetor1[i]);
    for(i = 0; i < b; i++)
        scanf("%d", &vetor2[i]);
    
    printf("%d\n", tempoEntrega(vetor1, vetor2, a, b));

    return 0;
}