#include <iostream>

using namespace std;

int main() {

    int vetor[3], maiorNum;

    cin >> vetor[0] >> vetor[1] >> vetor[2];
    maiorNum = vetor[0];
    for(int i = 0; i < 3; i++)
        if(vetor[i] > maiorNum)
            maiorNum = vetor[i];
    cout << maiorNum << " eh o maior" << endl;

    return 0;
}