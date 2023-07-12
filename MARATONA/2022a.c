#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n, cout = 0, i = 0;

    scanf("%d", &n);

    char string[n];

    scanf("%s", string);

    while(string[i] != '\0') {
        if(string[i] == 'a' && string[i+1] == 'a') {
            cout++;
            while(string[i] != 'a')
                cout++;
        }
        i++;
    }

    printf("%d\n", cout);

    return 0;
}