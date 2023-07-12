#include <stdio.h>
#include <stdlib.h>

int main() {

    int tab[10][10] = {0}, D, L, R, C, x, valido = 1;

    if(scanf("%d", &x)) {}

    for(int i = 0; i < x; i++) {
        if(scanf("%d %d %d %d", &D, &L, &R, &C)) {}

        if(D == 0) {
            for(int j = 0; j < L; j++) {
                if(tab[R][C] == 0)
                    tab[R][C++] = 1;
                else {
                    valido = 0;
                }
            } 
        }
        else {
            for(int j = 0; j < L; j++) {
                if(tab[R][C] == 0)
                    tab[R++][C] = 1;
                else {
                    valido = 0;
                }
            } 
        }
    }
    
    if(valido)
        printf("Y\n");
    else    
        printf("N\n");
}