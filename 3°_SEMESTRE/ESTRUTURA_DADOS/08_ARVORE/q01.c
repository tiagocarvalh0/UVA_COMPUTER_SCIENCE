#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int arvoreValida(Tree *t);

int main() {

    Tree *arvore1 = Tree_alloc('+', 
                                Tree_alloc('*', 
                                    Tree_alloc('2', NULL, NULL), 
                                    Tree_alloc('2', NULL, NULL)),
                                Tree_alloc('5', NULL, NULL));
    Tree *arvore2 = Tree_alloc('4', 
                                    Tree_alloc('*',
                                        Tree_alloc('7', NULL, NULL),
                                        Tree_alloc('2', NULL, NULL)),
                                    Tree_alloc('+', NULL, NULL));
    Tree *arvore3 = Tree_alloc('-',
                                    Tree_alloc('*',
                                        Tree_alloc('2', NULL, NULL),
                                        Tree_alloc('3', NULL, NULL)),
                                    Tree_alloc('+',
                                                NULL,
                                                Tree_alloc('3', NULL, NULL)));
    // (((1+2)*3)/((4-2)+5)) VALIDA
    Tree* arvore4 = Tree_alloc('/',
                            Tree_alloc('*',
                                Tree_alloc('+',
                                    Tree_alloc('1', NULL, NULL),
                                    Tree_alloc('2', NULL, NULL)),
                                Tree_alloc('3', NULL, NULL)),
                            Tree_alloc('+',
                                Tree_alloc('-',
                                    Tree_alloc('4', NULL, NULL),
                                    Tree_alloc('2', NULL, NULL)),
                                Tree_alloc('5', NULL, NULL)));
    // ((3+4)*(8/2)) VALIDA
    Tree *arvore5 = Tree_alloc('*',
                            Tree_alloc('+',
                                        Tree_alloc('3', NULL, NULL),
                                        Tree_alloc('4', NULL, NULL)),
                            Tree_alloc('/',
                                        Tree_alloc('8', NULL, NULL),
                                        Tree_alloc('2', NULL, NULL)));

    //INVALIDA
    Tree *arvore6 = Tree_alloc('-',
                            Tree_alloc('*',
                                        Tree_alloc('2', NULL, NULL),
                                        Tree_alloc('3', NULL, NULL)),
                            Tree_alloc('+',
                                        NULL,
                                        Tree_alloc('3', NULL, NULL)));
    //INVALIDA
    Tree *arvore7 = Tree_alloc('-',
                            Tree_alloc('+',
                                        Tree_alloc('2', NULL, NULL),
                                        Tree_alloc('3', NULL, NULL)),
                            Tree_alloc('*', NULL, NULL));



    printf("Arvore 1= %d\n", arvoreValida(arvore1));
    printf("Arvore 2= %d\n", arvoreValida(arvore2));
    printf("Arvore 3= %d\n", arvoreValida(arvore3));
    printf("Arvore 4= %d\n", arvoreValida(arvore4));
    printf("Arvore 5= %d\n", arvoreValida(arvore5));
    printf("Arvore 6= %d\n", arvoreValida(arvore6));
    printf("Arvore 7= %d\n", arvoreValida(arvore7));

    Tree_free(arvore1);
    Tree_free(arvore2);
    Tree_free(arvore3);
    Tree_free(arvore4);
    Tree_free(arvore5);
    Tree_free(arvore6);
    Tree_free(arvore7);
    return 0;
}

//VERIFICA VALIDADE DA EXPRESSAO
int arvoreValida(Tree *t) {
    if(t) { // VERIFICA SE A ARVORE E VALIDA
        if(t->left == NULL && t->right == NULL) { // VERIFIVA SE OS FILHOS DE T SAO NULOS (enquanto um nó que possui um operando deve possuir ambos os filhos nulos indicando que é uma folha)
            if(t->value >= '0' && t->value <= '9') // VERIFICA SE E UM DIGITO VALIDO
                return 1;
            return 0;
        }
        else if(t->left && t->right) { // VERIFICA SE LEFT E RIGHT SAO NAO NULOS(um nó com um operador deve possuir os filhos esquerdo e direito não nulos)
            if(t->value == '+' || t->value == '-' || t->value == '*' || t->value == '/') // VERIFICA SE A OPERACAO E VALIDA
                return arvoreValida(t->left) && arvoreValida(t->right);
            return 0;
        }
        else
            return 0;   
    }
}
