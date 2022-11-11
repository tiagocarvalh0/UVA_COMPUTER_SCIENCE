#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
int verification(char *argv[]);

int main(int argc, char *argv[]) {
    if (argc == 2) { //Verificando se a quantidade de parametros estao certas
        int invalid_option = verification(argv); 

        if (!invalid_option) { //Verificando se a opcao foi encontrada
            printf("Opção inválida, por favor digite novamente.\n\n");
            menu();
        }
        printf("\n");
    }else if (argc == 1) { //Caso esteja faltando a opcao
        printf("Necessário entrada de opções.\n");
        menu();
    }else if (argc > 2) { //Caso tenha opcoes mais que esperado
        printf("Quantidade de opções além da suportada.\n");
        menu();
    }
}

void menu() { //Funcao para mostrar o menu help
    printf("Usage: ./bomdia [OPTION]\n");
    printf("Say good morning in different languages.\n");
    printf("\n");
    printf("Avaible arguments: \n");
    printf("--help or -h          %s\n", "display this help.");
    printf("--version or -v       %s\n", "display version information.");
    printf("--pt or -1            %s\n", "Say in portuguese");
    printf("--en or -2            %s\n", "Say in english");
    printf("--es or -3            %s\n", "Say in spanish");
    printf("--fr or -4            %s\n", "Say in french");
    printf("--it or -5            %s\n", "Say in italian");
}
int verification(char *argv[]) { //Verificação de todas as opcoes
    if (!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")) { //Imprimir menu help
        menu();
        return 1;
    }
    if (!strcmp(argv[1], "--version") || !strcmp(argv[1], "-v")) { //Mostrar versao
        printf("BomDia (Windows\\Ubuntu\\Seila 1.0.2-1windows\\ubuntu\\seila) 1.0.2\n");
        printf("Copyright (C) 2022 Rener Pontes.\n");
        printf("This is a university project software.\n");
        printf("\n");
        printf("Written by Rener Pontes and no one else.\n");
        return 1;
    }

    if (!strcmp(argv[1], "--pt") || !strcmp(argv[1], "-1")) { //Falar em Portugues
        printf("Bom dia!\n");
        return 1;
    }
    if (!strcmp(argv[1], "--en") || !strcmp(argv[1], "-2")) { //Falar em Ingles
        printf("Good morning!\n");
        return 1;
    }
    if (!strcmp(argv[1], "--es") || !strcmp(argv[1], "-3")) { //Falar em Espanhol
        printf("Buen Día!\n");
        return 1;
    }
    if (!strcmp(argv[1], "--fr") || !strcmp(argv[1], "-4")) { //Falar em Frances
        printf("Bonjour!\n");
        return 1;
    }
    if (!strcmp(argv[1], "--it") || !strcmp(argv[1], "-5")) { //Falar em Italiano
        printf("Buongiorno!\n");
        return 1;
    }

    return 0; //Caso nenhum comando foi encontrado ele retorna 1
}
