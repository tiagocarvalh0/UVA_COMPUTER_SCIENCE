#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerArqFilmes();
void ordenarVetorFilmes();
void gravarFilmesOrdenados();

    typedef struct {
        char nomeFilme[100];
        int anoFilme;
    } T_FILME;

    FILE *arqFilmesOrdenados;
    FILE *arqFilmes;  

int main() {   

    T_FILME Filmes[20];
    T_FILME FilmesAUX;

    lerArqFilmes(Filmes);
    ordenarVetorFilmes(Filmes, FilmesAUX);
    gravarFilmesOrdenados(Filmes);

    return 0;
}

// Leia a partir do arquivo de texto filmes.txt as informações de 20 filmes e registre-as em um vetor com o tipo da estrutura que você criou.
void lerArqFilmes(T_FILME Filmes[]) {
    arqFilmes = fopen("filmes.txt", "r");

    if(arqFilmes == NULL) {
        printf("!!! ERRO AO ABRIR O ARQ !!!\n");
    } else {
        for(int i = 0; i < 20; i++) {
           fscanf(arqFilmes, "%s %d", Filmes[i].nomeFilme, &Filmes[i].anoFilme);
        }
        fclose(arqFilmes);
    }
    
}

// Crie uma função que receba um vetor da estrutura Filme e ordene os filmes no vetor por ano de lançamento, do mais recente para o mais antigo.
void ordenarVetorFilmes(T_FILME Filmes[], T_FILME FilmesAUX) {
    for(int j = 0; j < 20; j++)
        for(int i = 0; i < 19; i++) {
            if(Filmes[i].anoFilme > Filmes[i+1].anoFilme) {
                FilmesAUX = Filmes[i];
                Filmes[i] = Filmes[i+1];
                Filmes[i+1] = FilmesAUX;
            }
        }
    // Demonstre o uso da função imprimindo os filmes ordenados.
    for(int i = 0; i < 20; i++)
        printf("%s %d\n", Filmes[i].nomeFilme, Filmes[i].anoFilme);
}

// Grave em um novo arquivo de texto chamado filmes_ordenados.txt os filmes do vetor que foi ordenado.
void gravarFilmesOrdenados(T_FILME Filmes[]) {
    arqFilmesOrdenados = fopen("filmes_ordenados.txt", "a");

    if(arqFilmesOrdenados == NULL)
        printf("!!!ERRO NO ARQ !!!\n");
    else {
        for(int i = 0; i < 20; i++)
            fprintf(arqFilmesOrdenados, "%s %d\n", Filmes[i].nomeFilme, Filmes[i].anoFilme);
        fclose(arqFilmesOrdenados);
    }
}