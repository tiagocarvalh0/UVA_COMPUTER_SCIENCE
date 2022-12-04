#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b;
    float c;

    cin >> a >> b;
    cin >> c;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << b*c << endl;

    return 0;
}