#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double a, b, c, del, r1, r2 ;
	
	cin >> a >> b >> c;
	del = (b * b) - 4 * a * c ;
	
	if ((a == 0) || (b == 0) || (c == 0) || (del < 0)) {
		cout << "Impossivel calcular" << endl;
	}
	else {
		r1 = ((-b) + sqrt(del)) / (2 * a) ;
		r2 = ((-b) - sqrt(del)) / (2 * a) ;
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
	}


    return 0;
}