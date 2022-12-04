#include <iostream>
#include <iomanip>
#define AUMENTO 0.15

using namespace std;

int main() {

    string nome;
    double a, b;

    cin >> nome;
    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << a + (b*AUMENTO) << endl;

    return 0;
}