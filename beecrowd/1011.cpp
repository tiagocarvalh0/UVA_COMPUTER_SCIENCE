#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main() {

    double r;

    cin >> r;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4/3.0) * PI * (r*r*r) << endl;

    return 0;
}