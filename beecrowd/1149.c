#include <stdio.h>

int main()
{
    int a, c = 0, i, soma = 0;

    scanf("%d", &a);
    while(c <= 0 )
        scanf("%d", &c);

    for(i = 0; i < c; i++)
        soma += a + i;
    
    printf("%d\n", soma);

    return 0;
}