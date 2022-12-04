#include <iostream>

using namespace std;

int main() {

    int n, a, b;

    cin >> n;
    cin >> a >> b;

    if((a + b) <= n)
        cout << "Farei hoje!\n";
    else    
        cout << "Deixa para amanha!\n";

    return 0;
}