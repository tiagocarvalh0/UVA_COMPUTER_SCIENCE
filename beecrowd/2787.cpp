#include <iostream>

using namespace std;

int main() {

    int l, c;

    cin >> l;
    cin >> c;

    if((l + c) % 2 == 0)
        cout <<"1\n";
    else    
        cout <<"0\n";

    return 0;
}