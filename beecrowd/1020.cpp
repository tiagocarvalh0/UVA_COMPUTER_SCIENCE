#include <iostream>

using namespace std;

int main() {

    int anos, mes, dias ;
	
	cin >> dias;
	anos = dias / 365 ;
	dias = dias - (anos * 365);
	mes = dias / 30 ;
	dias = dias - (mes * 30);

    cout << anos << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl; 

    return 0;
}