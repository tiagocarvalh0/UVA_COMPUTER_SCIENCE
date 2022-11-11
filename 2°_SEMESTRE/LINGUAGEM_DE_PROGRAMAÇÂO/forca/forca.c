#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void forca();
void erro01();
void erro02();
void erro03();
void erro04();
void erro05();
void erro06();
void sortearPalavra();

const char vetorDePalavras[10][10] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};

int main()
{
    char palavra[10] = {"******"};
    char cpyPalavra[10] = {"idiota"};
    sortearPalavra(cpyPalavra);


    printf("%s\n", palavra);

    return 0;
}

void forca()
{
    printf("_____\n");
    printf("   |\n");
}

void erro01()
{
    forca();
    printf("  (_)\n");
}

void erro02()
{
    forca();
    printf("  (_) \n");
    printf("   | \n");
    printf("   | \n");
}

void erro03()
{
    forca();
    printf("  (_) \n");
    printf("  /| \n");
    printf("   | \n");
}

void erro04()
{
    forca();
    printf("  (_) \n");
    printf("  /|\\ \n");
    printf("   | \n");
}

void erro05()
{
    forca();
    printf("  (_) \n");
    printf("  /|\\ \n");
    printf("   | \n");
    printf("  / \n");
}

void erro06()
{
    forca();
    printf("  (_) \n");
    printf("  /|\\ \n");
    printf("   | \n");
    printf("  / \\ \n");
}

void sortearPalavra(char cpyPalavra[])
{   
    int i = 10 % rand();
    printf("%d ", i);
}