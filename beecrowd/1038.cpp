#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b;
    float vetor[5] = {4.0, 4.5, 5.0, 2.0, 1.5};

    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << vetor[a-1] * b << endl;

    return 0;
}