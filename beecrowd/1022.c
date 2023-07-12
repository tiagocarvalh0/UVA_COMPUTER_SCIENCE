#include <stdio.h>
#include <stdlib.h>

typedef struct Fracao {
    int divisor;
    int dividendo;
} Fracao;

Fracao soma(Fracao primeira, Fracao segunda) {
    Fracao FraSoma;
    FraSoma.dividendo = (primeira.dividendo * segunda.divisor) + (primeira.divisor * segunda.dividendo); 
    FraSoma.divisor = (primeira.divisor * segunda.divisor);
    return FraSoma;
}

Fracao subtracao(Fracao primeira, Fracao segunda) {
    Fracao FraSub;
    FraSub.dividendo = (primeira.dividendo * segunda.divisor) - (segunda.dividendo * primeira.divisor);
    FraSub.divisor = primeira.divisor * segunda.divisor;
    return FraSub;
}

Fracao multiplicacao(Fracao primeira, Fracao segunda) {
    Fracao FraMulti;
    FraMulti.dividendo = primeira.dividendo * segunda.dividendo;
    FraMulti.divisor = primeira.divisor * segunda.divisor ;
    return FraMulti;
}

Fracao divisao(Fracao primeira, Fracao segunda) {
    Fracao FraDivi;
    FraDivi.dividendo = (primeira.dividendo * segunda.divisor);
    FraDivi.divisor = (segunda.dividendo * primeira.divisor);
    return FraDivi;
}

int mdc(int p, int q) {
    if(q == 0)
        return p;
    else    
        return mdc(q, p % q);
}

Fracao irre(Fracao resultado) {
    int i;
    if(resultado.dividendo < 0)
        i = mdc(-resultado.dividendo, resultado.divisor);
    else    
        i = mdc(resultado.dividendo, resultado.divisor);

        resultado.dividendo /= i;
        resultado.divisor /= i;

        return resultado;
}

int main() {

    int x;
    char y;
    Fracao primeira, segunda, resultado;

    scanf("%d", &x);

    for(int i = 0; i < x; i++) {
        scanf("%d / %d %c %d / %d", &primeira.dividendo, &primeira.divisor, &y, &segunda.dividendo, &segunda.divisor);
        if(y == '+')
            resultado = soma(primeira, segunda);
        if(y == '-')
            resultado = subtracao(primeira, segunda);
        if(y == '*')
            resultado = multiplicacao(primeira, segunda);
        if(y == '/')
            resultado = divisao(primeira, segunda);

        printf("%d/%d = ", resultado.dividendo, resultado.divisor);
        resultado = irre(resultado);
        printf("%d/%d\n", resultado.dividendo, resultado.divisor);
    }

    return 0;
}