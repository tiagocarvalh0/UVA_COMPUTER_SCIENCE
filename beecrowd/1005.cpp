#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, b, media;

    cin >> a >> b;
    a = a*3.5;
    b = b*7.5;
    media = (a+b)/11;
    printf("MEDIA = %.05lf\n", media);

    return 0;
}