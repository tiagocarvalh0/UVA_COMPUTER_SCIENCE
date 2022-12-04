#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {

    char name[10];
    int pessoasIndo = 0, pessoasVoltando = 0, aux, carroSair = 0, carroVoltar = 0;

    while(1) {
        cout << flush;
        cin >> name;
        if(strcmp(name,"ABEND")==0)
            break;
            else
                cin >> aux;
        if(strcmp(name, "SALIDA")==0) {
            carroSair++;
            pessoasIndo += aux;
        }
        else {
            carroVoltar++;
            pessoasVoltando += aux;
        }
    }
    cout << pessoasIndo - pessoasVoltando << "\n";
    cout << carroSair - carroVoltar << "\n";

    return 0;
}