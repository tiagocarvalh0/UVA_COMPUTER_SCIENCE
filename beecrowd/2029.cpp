#include <iostream>
#include <iomanip>
#include <stdio.h>
#define PI 3.14

using namespace std;

int main(){
    int n;
    double v, d;

    while(scanf("%lf %lf", &v, &d)==2){
        d = d/2.00;
        v = v/(PI*d*d);
        d = PI*d*d;
        
        cout << setprecision(2);
        cout << setiosflags(ios::fixed);
        cout << "ALTURA = " << v << "\n";
        cout << "AREA = " << d << "\n";
    }

    return 0;
}