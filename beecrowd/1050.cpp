#include <iostream>

using namespace std;

int main()
{
   int N;
    cin >> N;
    if(N==61)
        cout << "Brasilia\n";
    else if(N==71)
        cout << "Salvador\n";
    else if(N==11)
        cout << "Sao Paulo\n";
    else if(N==21)
        cout << "Rio de Janeiro\n";
    else if(N==32)
        cout << "Juiz de Fora\n";
    else if(N==19)
        cout << "Campinas\n";
    else if(N==27)
        cout << "Vitoria\n";
    else if(N==31)
        cout << "Bela Horizonte\n";
    else
        cout << "DDD nao cadastrado\n";

    return 0;
}
