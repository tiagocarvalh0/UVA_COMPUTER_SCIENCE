#include <iostream>

using namespace std;

int main() {
	int x, x1, x2, x3, x4, x5, x6, x7 ;
	
	cin >> x;
	x1 = x / 100 ;
	cout << x << endl;
	cout << x1 << " nota(s) de R$ 100,00" << endl;
	x2 = (x - (x1 * 100)) / 50 ;
	cout << x2 << " nota(s) de R$ 50,00" << endl;
	x3 = (x - ((x2 * 50) + (x1 * 100))) / 20 ;
	cout << x3 << " nota(s) de R$ 20,00" << endl;
	x4 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20))) / 10 ;
	cout << x4 << " nota(s) de R$ 10,00" << endl;
	x5 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10))) / 5 ;
	cout << x5 << " nota(s) de R$ 5,00" << endl;
	x6 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10) + (x5 * 5))) / 2 ;
	cout << x6 << " nota(s) de R$ 2,00" << endl;
	x7 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10) + (x5 * 5) + (x6 * 2))) / 1 ;
	cout << x7 << " nota(s) de R$ 1,00" << endl;
	
    return 0;
}