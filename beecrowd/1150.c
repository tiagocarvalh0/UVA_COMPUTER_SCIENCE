#include <stdio.h>

int main()
{
    int a, b, cont = 0, soma = 0;

    scanf("%d", & a);
    scanf("%d", &b);
    while(a >= b)
        scanf("%d", &b);
    
    while(soma <= b)
    {
        soma+= a++;
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}