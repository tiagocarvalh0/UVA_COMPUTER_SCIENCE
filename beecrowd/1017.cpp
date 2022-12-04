#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b;
    float media;

    cin >> a >> b;
    media = (a*b)/12.0;
    cout << fixed << setprecision(3);
    cout << media << endl;

    return 0;
}