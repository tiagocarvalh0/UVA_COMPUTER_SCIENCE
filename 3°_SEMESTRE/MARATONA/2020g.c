#include <stdio.h>
#include <stdlib.h>

int main() {

    int max = 100, aux = 100, x, y;

    if(scanf("%d", &x)){}
        for(int i = 0; i < x; i++) {
            if(scanf("%d", &y)) {}
            aux+= y;
            if(aux > max)
                max = aux;
        }
    printf("%d\n", max);

    return 0;
}