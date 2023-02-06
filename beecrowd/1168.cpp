#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int n = 0, soma = 0;
    char numero[101];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> numero;
        for(int j = 0; j < strlen(numero); j++) {
            if(numero[j] == '4')
                soma += 4;
            else if(numero[j] == '1')
                soma += 2;
            else if(numero[j] == '2' || numero[j] == '3' || numero[j] == '5')
                soma += 5;
            else if(numero[j] == '0' || numero[j] == '6' || numero[j] == '9')
                soma += 6;
            else if(numero[j] == '7')
                soma += 3;
            else if(numero[j] == '8')
                soma += 7;
        }
        cout << soma << " leds" << endl; 
        soma = 0;   
    }

    return 0;
}

/*

0, 4 = 4
1 = 2
2, 3, 5 = 5
6, 9 = 6
7 = 3
8 = 7


*/