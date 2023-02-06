#include <iostream>
#include <iomanip>
#define TAM 12

using namespace std;

int main() {

    char operacao;
    float matriz[TAM][TAM];
    double num;
    double soma = 0;

    cin >> operacao;

    for(int linha = 0; linha < TAM; linha++)
        for(int coluna = 0; coluna < TAM; coluna++) {
            cin >> num;
            matriz[linha][coluna] = num;
            if(coluna < (11 - linha) && coluna < linha) 
                soma += matriz[linha][coluna];
        }
    if(operacao == 'S' || operacao == 's') {
        cout << fixed << setprecision(1);
        cout << soma << endl;
    }
    else {
        cout << fixed << setprecision(1);
        cout << soma / 30.0 << endl;
    }

    return 0;
}