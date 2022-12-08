#include <iostream>

using namespace std;

int main() {

    int vetor[3], vetorAux[3], aux;

    cin >> vetor[0] >> vetor[1] >> vetor[2];

    vetorAux[0] = vetor[0];
    vetorAux[1] = vetor[1];
    vetorAux[2] = vetor[2];

    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 2; i++) {
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }

    for(int i = 0; i < 3; i++)
        cout << vetor[i] << endl;

    cout << endl;

    for(int i = 0; i < 3; i++)
        cout << vetorAux[i] << endl;

    return 0;
}