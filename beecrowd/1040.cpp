#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float n1, n2, n3, n4, n5, media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    
    cout << fixed << setprecision(1);

    if(media >= 7.0) {
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) {
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    else {
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl; 
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        media = (media+n5) / 2;
        if(media < 5) {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << media << endl;
        }    
        else {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << media << endl;
        }  
    }

    return 0;
}