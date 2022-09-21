#include <stdio.h>

void apagarChar(char palavra[], char letra)
{
    int i;

    for(i = 0; palavra[i] != '\0'; i++)
        if(palavra[i] == letra)
            palavra[i] = ' ';

    printf("%s\n", palavra);
}

int main()
{
    char palavra[20], letra;

    printf("PALAVRA: ");
    scanf("%s", palavra);

    scanf("%*c");

    printf("LETRA: ");
    scanf("%c", &letra);

    apagarChar(palavra, letra);

    return 0;
}