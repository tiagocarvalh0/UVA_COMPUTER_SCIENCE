#include <stdio.h>
 
int main() {
 
    int x, v1, v2;
    scanf("%d", &x);
    for(int i = 0; i < x; i++) {
        scanf("%d %d", &v1, &v2);
        printf("%d\n", v1+v2);
    }
 
    return 0;
}
