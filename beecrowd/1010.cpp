#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, A, b, B;
    float c, C;

    cin >> a >> b >> c;
    cin >> A >> B >> C;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (b * c) + (B * C) << endl;

    return 0;
}