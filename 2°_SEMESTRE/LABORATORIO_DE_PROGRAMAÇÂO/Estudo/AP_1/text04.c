#include <stdio.h>

int contString(char palavra[],char a)
{
    int i, cont = 0;

    for(i = 0; palavra[i] != '\0'; i++)
        if(palavra[i] == a)
            cont++;
    return cont;
}

int main()
{
    char palavra[20], letra;

    printf("PALAVRA: ");
    scanf("%s", palavra);
    scanf("%*c");
    printf("LETRA: ");
    scanf("%c", &letra);

    printf("%d\n", contString(palavra, letra));

    return 0;
}