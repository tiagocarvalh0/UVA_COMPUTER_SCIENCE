#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_STRING 50
#define TAM_TEXTO 1000

    FILE *arqLembrete;

    const typedef enum {FAZER_NOVO_LEMBRETE = 1, SAIR = 2} T_OPCAO;

    typedef struct 
    {
        char stringLembrete[TAM_STRING];
        int numeroLembrete;
        char textoLembrete[TAM_TEXTO];
    }T_CADASTRO_LEMBRETE;

    T_CADASTRO_LEMBRETE cadastroLembrete;

    int opcaoSelecionada;

void telaMenu();
void lerMostrarLembrete();
void telaInformarOpcoes();
void selecionarOpcao();
void cadastroNovoLembrete();
void limparBuffer();

int main() {
    arqLembrete = fopen("lembretes.txt", "ab+");
    system("clear");
    telaMenu();
}

// MENU PRINCIPAL 
void telaMenu() {
    while(1) {
        system("clear");
        if(arqLembrete == NULL) {
            printf("!!! ERRO: ARQ N CRIADO !!!\n");
            exit(1);
        }
        lerMostrarLembrete();
        telaInformarOpcoes();
        selecionarOpcao();
        if(opcaoSelecionada == FAZER_NOVO_LEMBRETE)
            cadastroNovoLembrete();
        else if(opcaoSelecionada == SAIR){
            fclose(arqLembrete);
            exit(1);
        }
    }
}

// LE E MOSTRA OS LEMBRETES EXISTENTES
void lerMostrarLembrete() {
    while(1) {
        if(feof(arqLembrete))
            break;
        else {
            fread(&cadastroLembrete, sizeof(T_CADASTRO_LEMBRETE), 1, arqLembrete);
            printf("%s %d: %s\n", cadastroLembrete.stringLembrete, cadastroLembrete.numeroLembrete, cadastroLembrete.textoLembrete);
        }
    }
}

// INFORMAR NOVO LEMBRETE
void cadastroNovoLembrete() {
    limparBuffer();
    while(1) {
    if(feof(arqLembrete))
        break;
    else 
        fread(&cadastroLembrete, sizeof(T_CADASTRO_LEMBRETE), 1, arqLembrete);
    }
    cadastroLembrete.numeroLembrete += 1;
    strcpy(cadastroLembrete.stringLembrete, "Lembrete");
    printf("%s %d: ", cadastroLembrete.stringLembrete, cadastroLembrete.numeroLembrete);
    fgets(cadastroLembrete.textoLembrete, 1000, stdin);
    fwrite(&cadastroLembrete, sizeof(T_CADASTRO_LEMBRETE), 1, arqLembrete);
}

// MENU DE OPCOES MOSTRADO AO USUARIO
void telaInformarOpcoes() {
    printf("===== MENU =====\n");
    printf("(1) = Fazer Novo Lebrete.\n");
    printf("(2) = SAIR.\n");
    printf("Selecionar: ");
}

// OPCAO SELECIONADA PELO USUARIO
void selecionarOpcao() {
    scanf("%d", &opcaoSelecionada);
}

// LIMPAR BUFFER DO TECLADO
void limparBuffer() {
    char c;
    while((c = getchar()) !='\n' && c != EOF);
}