#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double A, B, C, media;

    cin >> A >> B >> C;
    media = (2 * A + 3 * B + 5 * C)/10.0;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;


    return 0;
}